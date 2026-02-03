#include <stdio.h>
#include <math.h>

int main() {
	int x1, y1;
	int x2, y2;
	int x3, y3;
	int d1, d2, d3, max;

	printf("Upisi prvu tocku (x, y): ");
	scanf("%d %d", &x1, &y1);

	printf("Upisi drugu tocku (x, y): ");
	scanf("%d %d", &x2, &y2);

	printf("Upisi trecu tocku (x, y): ");
	scanf("%d %d", &x3, &y3);

	d1 = sqrt(x1 * x1 + y1 * y1);
	d2 = sqrt(x2 * x2 + y2 * y2);
	d3 = sqrt(x3 * x3 + y3 * y3);

	max = d1;
	if (d2 > max) max = d2;
	if (d3 > max) max = d3;

	if (max == d1) printf("Kordinate tocke najudaljenije od ishodista: %d %d", x1, y1);
	else if (max == d2) printf("Kordinate tocke najudaljenije od ishodista: %d %d", x2, y2);
	else printf("Kordinate tocke najudaljenije od ishodista: %d %d", x3, y3);
}
