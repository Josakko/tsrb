#include <stdio.h>

int main() {
	int a, b, c;

	printf("Upisi stranicu: ");
	scanf("%d", &a);

	printf("Upisi stranicu: ");
	scanf("%d", &b);

	printf("Upisi stranicu: ");
	scanf("%d", &c);

	if (a == b || a == c || b == c) {
		if (a == b && a == c) {
			printf("Trokut je jednakostranican");
		} else { 
			printf("Trokut je jednakokracan");
		}

	} else { 
		printf("Trokut je raznostranican");
	}
}
