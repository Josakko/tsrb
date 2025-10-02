# include <stdio.h>
# include <math.h>
int main(void) {

	int i, br, djel = 0;

	printf("Upisi neki broj: ");
	scanf_s("%d", &br);

	for (i = 1;i <= br;i++) {

		if (br % i == 0) {

			djel++;
			
		}
	}
	if (djel == 2) {

		printf("Broj je prim");
	}
	else {

		printf("Broj nije prim");
	}
}