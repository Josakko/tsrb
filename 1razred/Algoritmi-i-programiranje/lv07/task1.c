#include <stdio.h>

int main(void) {

	int a, b, c, max = 0;

	printf("Upisi prvi broj: ");
	scanf_s("%d", &a);

	printf("Upisi drugi broj: ");
	scanf_s("%d", &b);

	printf("Upisi treci broj: ");
	scanf_s("%d", &c);

	max = a;
	if (b > max) max = b;
	if (c > max) max = c;

	printf("Broj %d je najveci od ucitanih brojeva", max);

}