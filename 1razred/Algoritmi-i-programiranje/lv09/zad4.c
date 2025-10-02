# include <stdio.h>
# include <math.h>
int main(void) {

	float br, max;
	int i, j = 0;

	for (i = 0;i < 5;i++) {

		printf("Upisi %d. broj: ", i + 1);
		scanf_s("%f", &br);

		if ((int)br == br) {

			if (j == 0) {

				max = br;

			}

			if (br > max) max = br;

		}
		j++;

	}
	printf("Najveci cijeli broj: %.0f", max);

}