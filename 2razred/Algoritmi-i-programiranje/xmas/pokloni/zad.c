#include <stdio.h>
#include <string.h>
#define N 50 // max amount of presents
#define STRLEN 100

struct Poklon
{
	char name[STRLEN];
	char surname[STRLEN];
	char gift_name[STRLEN];
	int price;
};

int ukupnaCijena(struct Poklon poklons[], int n) {
	int total = 0;

	for (int i = 0; i < n; i++)
		total += poklons[i].price;

	return total;
}

float prosjecnaCijena(struct Poklon poklons[], int n) {
	int total = ukupnaCijena(poklons, n);
	float avg = total / (float)n;

	return avg;
}

struct Poklon najskupljiPoklon(struct Poklon poklons[], int n) {
	struct Poklon max = poklons[0];

	for (int i = 1; i < n; i++) {
		if (poklons[i].price > max.price)
			max = poklons[i];
	}

	return max;
}

struct Poklon najjeftinijiPoklon(struct Poklon poklons[], int n) {
	struct Poklon min = poklons[0];

	for (int i = 1; i < n; i++) {
		if (poklons[i].price < min.price)
			min = poklons[i];
	}

	return min;
}

void ispis(struct Poklon poklons[], int n) {
	printf("\n\tIme\t|\tPrezime\t|\tnaziv-poklona\t|\tcijena\t");
	for (int i = 0; i < n; i++) {
		printf("\n\t%s\t|\t%s\t|\t%s\t\t|\t%d\t", 
			poklons[i].name, 
			poklons[i].surname, 
			poklons[i].gift_name, 
			poklons[i].price
		);
	}
}

int main() {
	struct Poklon a[N];
	int n;
	int budget;

	printf("unesi broj ljudi: ");
	scanf("%d", &n);

	printf("unesi budzet: ");
	scanf("%d", &budget);

	while (1) {
		for (int i = 0; i < n; i++) {
			getchar(); // empty input buffer because scanf leaves '\n' which fuck with gets

			// fgets also reads '\n' and puts at the end of the string it reads, remove it
			printf("ime: "); 
			fgets(a[i].name, sizeof(a[i].name), stdin); a[i].name[strcspn(a[i].name, "\n")] = '\0';
			
			printf("surname: "); 
			fgets(a[i].surname, sizeof(a[i].surname), stdin); a[i].surname[strcspn(a[i].surname, "\n")] = '\0';
			
			printf("gift_name: "); 
			fgets(a[i].gift_name, sizeof(a[i].gift_name), stdin); a[i].gift_name[strcspn(a[i].gift_name, "\n")] = '\0';
			
			printf("price: "); 
			scanf("%d", &(a[i].price));
			
			printf("\n-------------------------\n\n");
		}

		int total = ukupnaCijena(a, n);

		if (total > budget) {
			printf("\nprijeden budget, ponavljam upis...\n");
			continue;
		}

		printf("Ukupna cijena je %d", total);

		float avg = prosjecnaCijena(a, n);
		struct Poklon najskuplji = najskupljiPoklon(a, n);
		struct Poklon cheapest = najjeftinijiPoklon(a, n);
		
		printf("\n-----najskuplji-----");
		printf("\nime: %s \nprezime: %s \nime poklona: %s \ncijena: %d",
			najskuplji.name,
			najskuplji.surname,
			najskuplji.gift_name,
			najskuplji.price
		);

		printf("\n-----najjeftiniji-----");
		printf("\nime: %s \nprezime: %s \nime poklona: %s \ncijena: %d",
			cheapest.name,
			cheapest.surname,
			cheapest.gift_name,
			cheapest.price
		);

		printf("\n\nprosjecna cijena: %.2f \n\n", avg);

		ispis(a, n);

		break;
	}
}
