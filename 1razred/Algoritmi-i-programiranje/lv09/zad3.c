# include <stdio.h>

int main(void) {

	int i;
	float br;
	for (i = 0;i < 5;i++) {

		printf("Upisi %d. broj: ", i + 1);
		scanf_s("%f", &br);

		if (br > 0 && (int)br == br) {

			printf("Broj %.2f je prirodan broj\n", br);

		}

		else if (br < 0 && (int)br == br) {

			printf("Broj %.2f je negativan cijeli\n", br);
			
		}

		else if ((int)br != br) {

			printf("Broj %.4f je realan\n", br);

		}

	}
	

}