#include <filesystem>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <csignal>

namespace fs = std::filesystem;

void clear() {
#ifdef _WIN32
        system("cls");
#else
        system("clear");
#endif
}

void wait() {
#ifdef _WIN32
    printf("\n\n");
    system("pause");
#else
    printf("\n\n");
    printf("echo Press any key to continue...");
    system("read -n1 -r");
#endif

}

void run(std::string path) {
    std::string command = "gcc " + path + " -o out.exe";
    clear();

    int res = std::system(command.c_str());
    if (res != 0) {
        std::cout << "Build failed!";
        return;
    }

#ifdef _WIN32
    system("out.exe");
#else
    system("./out.exe");
#endif
}

void lock(fs::path path) {
    std::string quotedPath = "\"" + path.string() + "\"";

    while (true) {
        std::signal(SIGINT, 
            [](int signal) {
                std::cout << "\n\n^C (SIGINT) caught. Exiting...";
            }
        );

        clear();
        run(quotedPath);

        chose:
            std::cout << "\n\n----------------------- " << path.filename().string() << " -----------------------\n";
            std::cout << "1) Recompile and rerun \n2) Exit \n";

            int choice;
            if (!(std::cin >> choice) || choice < 1 || choice > 2) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cerr << "Invalid input, try again.\n";
                clear();
                goto chose;
            }

            if (choice == 2) return;
    }
}

int main(int argc, char* argv[]) {
    fs::path current = (argc > 1 && fs::is_directory(fs::path(argv[1]))) ? fs::path(argv[1]) : fs::current_path();

    while (true) {
        std::signal(SIGINT, [](int signal) {});

        clear();

        std::vector<fs::directory_entry> items;

        std::size_t dir_size =  std::distance(fs::directory_iterator(current), fs::directory_iterator{});
        items.reserve(dir_size);

        for (const auto& item : fs::directory_iterator(current))
            items.push_back(item);

        std::sort(items.begin(), items.end(), 
            [](const auto& a, const auto& b) {
                if (a.is_directory() != b.is_directory()) 
                    return a.is_directory();
                    
                return a.path().filename() < b.path().filename();
            }
        );

        if (current.has_parent_path())
            std::cout << "0) ..\n";

        for (std::size_t i = 0; i < items.size(); i++) {
            const auto& path = items[i].path();
            std::cout << i + 1 << ") "
                << path.filename().string()
                << (items[i].is_directory() ? "/" : "")
                << '\n';
        }

        int choice;
        if (!(std::cin >> choice)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cerr << "Invalid input. Exiting.\n";
            continue;
        }

        if (choice == -1) {
            continue;
        }

        if (choice == -2) {
            break;
        }

        if (choice == 0 && current.has_parent_path()) {
            current = current.parent_path();
            continue;
        }

        if (choice < 1 || choice > items.size()) {
            std::cout << "Out of range.\n";
            continue;
        }

        const fs::directory_entry& selected = items[choice - 1];

        if (selected.is_directory()) {
            current = selected;
        } else if (selected.is_regular_file()) {
            std::cout << "\nYou picked file: " << selected.path().filename().string() << "\n";

            fs::path fullPath = current / selected.path().filename();
            lock(fullPath);
        } else 
            std::cout << "\nFile you picked no longer exists";
        
    }

    return 0;
}
