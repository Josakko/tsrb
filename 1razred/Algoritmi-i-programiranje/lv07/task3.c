#include <stdio.h>
#include <math.h>
int main(void) {

	int x1, y1, x2, y2, x3, y3, d1, d2, d3, max;

	printf("Upisi x kordinatu prve tocke: ");
	scanf_s("%d", &x1);

	printf("Upisi y kordinatu prve tocke: ");
	scanf_s("%d", &y1);

	printf("Upisi x kordinatu druge tocke: ");
	scanf_s("%d", &x2);

	printf("Upisi y kordinatu druge tocke: ");
	scanf_s("%d", &y2);

	printf("Upisi x kordinatu trece tocke: ");
	scanf_s("%d", &x3);

	printf("Upisi y kordinatu trece tocke: ");
	scanf_s("%d", &y3);

	d1 = sqrt(x1 * x1 + y1 * y1);
	d2 = sqrt(x2 * x2 + y2 * y2);
	d3 = sqrt(x3 * x3 + y3 * y3);

	max = d1;
	if (d2 > max) max = d2;
	if (d3 > max) max = d3;

	if (max == d1) printf("Kordinate tocke najudaljenije od ishodista: %d %d", x1, y1);
	else if (max == d2) printf("Kordinate tocke najudaljenije od ishodista: %d %d", x2, y2);
	else if (max == d3) printf("Kordinate tocke najudaljenije od ishodista: %d %d", x3, y3);

}