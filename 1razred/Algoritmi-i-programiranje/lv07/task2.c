#include <stdio.h>

int main(void) {

	int a, b, c;

	printf("Upisi stranicu: ");
	scanf_s("%d", &a);

	printf("Upisi stranicu: ");
	scanf_s("%d", &b);

	printf("Upisi stranicu: ");
	scanf_s("%d", &c);

	if (a == b || a == c || b == c){

		if (a == b && a == c) {

			printf("Trokut nije jednakokracan");

		}
		else {
			printf("Trokut je jednakostranican");
		}
	}
	else printf("Trokut nije jednakokracan");
}