# include <stdio.h>
# include <string.h>

int main(void) {

	int a, b;

	printf("Upisi logicku vrijednost na ulazu A sklopa I: ");
	scanf_s("%d", &a);

	printf("Upisi logicku vrijednost na ulazu B sklopa I: ");
	scanf_s("%d", &b);

	if (a < 0 || a > 1 || b > 1 || b < 0) {

		printf("Neka vrijedost nije dobro upisana!");

	}
	else {

		if (a == 0 && b == 0 || a == 1 && b == 0 || a == 0 && b == 1) {

			printf("Vrijednost na izlazu sklopa: 0");

		}
		else printf("Vrijednost na izlazu sklopa: 1");

	}
}