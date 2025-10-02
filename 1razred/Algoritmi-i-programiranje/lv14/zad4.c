#include <stdio.h>
#include <math.h>

int main() {
	int x1, y1, x2, y2;

	printf("Upisi x i y kordinatu za A tocku: ");
	scanf("%d %d", &x1, &y1);

	printf("Upisi x i y kordinatu za B tocku: ");
	scanf("%d %d", &x2, &y2);

	printf("Udaljenost izmedju tocaka A(%d, %d) i B(%d, %d): %.2f", x1, y1, x2, y2, sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)));
}