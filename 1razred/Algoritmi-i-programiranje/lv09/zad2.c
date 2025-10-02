# include <stdio.h>

int main(void) {

	int i;
	float br;

	for (i = 0;i < 5;i++) {

		printf("Upisi %d. broj: ", i + 1);
		scanf_s("%f", &br);

		printf("Cijeli dio: %.2d\n", (int)br);
		printf("Decimalni dio: %.2f\n", br - (int)br);


	}

}