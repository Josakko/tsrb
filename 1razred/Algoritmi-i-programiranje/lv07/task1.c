#include <stdio.h>

int main() {
	int a, b, c, max = 0;

	printf("Upisi prvi broj: ");
	scanf("%d", &a);

	printf("Upisi drugi broj: ");
	scanf("%d", &b);

	printf("Upisi treci broj: ");
	scanf("%d", &c);

	max = a;
	if (b > max) max = b;
	if (c > max) max = c;

	printf("Broj %d je najveci od ucitanih brojeva", max);
}
