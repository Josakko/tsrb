# include <stdio.h>
# include <string.h>

int main(void) {

	float a, ar;
	int sto, des, jed, zb=0, br=0;

	printf("Upisi realan broj s 3 decimalne znamenke: ");
	scanf_s("%f", &a);

	a = a * 1000;

	sto = ((int)a % 1000) / 100;
	des = ((int)a % 100) / 10;
	jed = (int)a % 10;

	if (sto % 2 == 0) {

		zb += sto;
		br++;
		
	}
	if (des % 2 == 0) {

		zb += des;
		br++;
		
	}
	if (jed % 2 == 0) {

		zb += jed;
		br++;
		
	}
	ar = zb / (float)br;

	printf("Aritmeticka sredina parnih decimalnih znamenki: %.2f", ar);
}