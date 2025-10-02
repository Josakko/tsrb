# include <stdio.h>
# include <math.h>
int main(void) {

	int i;
	printf("Brojevi sa parnim brojem znamenki: ");
	for (i = 10;i <= 20;i++) {

		if ((i / 10 + i % 10) % 2 == 0) {

			printf("%d ", i);

		}

	}


}
