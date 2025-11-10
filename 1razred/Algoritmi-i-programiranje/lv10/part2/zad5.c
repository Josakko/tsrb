#include <stdio.h>

int main() {
    int sum, num;
    for (int i = 0; i < 5; i++) {
        do {
            printf("Upisi %d. prirodan broj: ", i + 1);
            scanf("%d", &num);
        } while ((int)num != num || num < 0);

        sum = 0;
        for (int j = 1; j < num; j++) {
            if (num % j == 0) {
                sum += j;
            }
        }

        if (sum == num) {
            printf("Broj %d je savrsen\n", num);
        }

        else {
            printf("Broj %d nije savrsen.\n", num);
        }
    }
}