#include<stdio.h>
#include <string.h>
#define STRLEN 100
#define N 20 // max amount of kolaci

struct Kolac {
	char name[STRLEN];
	int amount;
	int price;
};

void input(struct Kolac kolaci[], int n) {
	for (int i = 0; i < n; i++) {
		getchar();

		printf("unesi ime kolaca: ");
		fgets(kolaci[i].name, sizeof(kolaci[i].name), stdin); kolaci[i].name[strcspn(kolaci[i].name, "\n")] = '\0';

		printf("kolicina kolaca: ");
		scanf("%d", &kolaci[i].amount);

		printf("cijena kolaca: ");
		scanf("%d", &kolaci[i].price);
	}
}

void output(struct Kolac kolaci[], int n) {
	printf("\n\tNaziv\t|\tKolicina\t|\tCijena");

	for (int i = 0; i < n; i++) {
		printf("\n\t%s\t|\t%d\t\t|\t%d", 
			kolaci[i].name,
			kolaci[i].amount,
			kolaci[i].price
		);
	}
}

void sortByPrice(struct Kolac kolaci[], int n) {
	struct Kolac min;
	int min_i;

	for (int i = 0; i < n-1; i++) {
		min = kolaci[i];
		min_i = i;

		for (int j = i; j < n; j++) {
			if (kolaci[j].price < min.price) {
				min = kolaci[j];
				min_i = j;
			}
		}

		kolaci[min_i] = kolaci[i];
		kolaci[i] = min;
	}
}

// int str_lt(char str1[], char str2[]) {
// 
// }

int min(int a, int b) {
	int min = a;
	if (b < min)
		min = b;

	return min;
}

void sortByName(struct Kolac kolaci[], int n) {
	struct Kolac min_name;
	int min_name_i;
	int min_name_len;
	int curr_name_len;

	int limit;
	int i, j, k;
	for (i = 0; i < n - 1; i++) {
		min_name = kolaci[i];
		min_name_i = i;
		min_name_len = strlen(min_name.name);

		for (j = i+1; j < n; j++) {
			curr_name_len = strlen(kolaci[j].name);
			limit = min(min_name_len, curr_name_len);
			
			for (k = 0; k < limit; k++) {
				if (kolaci[j].name[k] < min_name.name[k]) {
					min_name = kolaci[j];
					min_name_i = j;
					min_name_len = strlen(min_name.name);
					break;
				} else if (kolaci[j].name[k] > min_name.name[k]) {
					break;
				}
			}

			// if same except for length then prioritize shorter, for example "idk" < "idks"
			if (k == limit) {
				if (curr_name_len < min_name_len) {
					min_name = kolaci[j];
					min_name_i = j;
					min_name_len = strlen(min_name.name);
				}
			}

		}

		kolaci[min_name_i] = kolaci[i];
		kolaci[i] = min_name;
	}
}

// could also do with index, where -1 is not found
int searchByName(struct Kolac kolaci[], int n, char name[], struct Kolac *res) {
	int ret = 0;

	for (int i = 0; i < n; i++) {
		if (!strcmp(kolaci[i].name, name)) {
			*res = kolaci[i];
			ret = 1;
			break;
		}
	}

	return ret;
}

int main() {
	int n;
	printf("upisi broj kolaca: ");
	scanf("%d", &n);

	struct Kolac kolaci[N];
	input(kolaci, n);

	char name[STRLEN];

	int opt;
	while (1) {
		printf("\nMENU> ");
		scanf("%d", &opt);
	
		switch (opt) {
		case 1:
			output(kolaci, n);
			break;

		case 2:
			sortByPrice(kolaci, n);
			break;

		case 3:
			sortByName(kolaci, n);
			break;

		case 4:
			getchar(); // empty input buffer because scanf leaves '\n' which fuck with gets

			// fgets also reads '\n' and puts at the end of the string it reads, remove it
			printf("unesi ime za pretragu: ");
			fgets(name, sizeof(name), stdin);  name[strcspn(name, "\n")] = '\0';

			struct Kolac ret;
			int res = searchByName(kolaci, n, name, &ret);
			if (!res) {
				printf("\nnot fonud!");
				break;
			}
	
			printf("\npretrazeni kolac: \n - ime: %s \n - kolicina: %d \n - cijena: %d", 
				ret.name,
				ret.amount,
				ret.price
			);
			break;

		case 5:
			return 0;

		default:
			break;
		}
	}

}
