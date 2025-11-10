#include <stdio.h>

int main() {
	int i;
	float br;

	for (i = 0; i < 5; i++) {
		printf("Upisi %d. broj: ", i + 1);
		scanf("%f", &br);

		printf("Cijeli dio: %.2d\n", (int)br);
		printf("Decimalni dio: %.2f\n", br - (int)br);
	}

}