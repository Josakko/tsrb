# include <stdio.h>

int main(void) {

	int i, nep=0;
	float br;
	for (i = 0;i < 5;i++) {

		while (1) {
			printf("Upisi %d. broj: ", i + 1);
			scanf_s("%f", &br);

			if ((int)br == br && br > 0) {

				break;
			}
		}
		if ((int)br % 2 != 0) {

			nep++;

		}

	}

	printf("Neparni brojevi: %d", nep);

	

}