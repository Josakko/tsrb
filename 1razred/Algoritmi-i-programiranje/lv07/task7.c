# include <stdio.h>
# include <string.h>

int main() {
	float a, avg;
	int sto, des, jed; 
	int sum = 0, n = 0;

	printf("Upisi realan broj s 3 decimalne znamenke: ");
	scanf("%f", &a);

	a *= 1000;

	sto = ((int)a % 1000) / 100;
	des = ((int)a % 100) / 10;
	jed = (int)a % 10;

	if (sto % 2 == 0) {
		sum += sto;
		n++;
	}

	if (des % 2 == 0) {
		sum += des;
		n++;
	}

	if (jed % 2 == 0) {
		sum += jed;
		n++;
	}
	avg = sum / (float)n;

	printf("Aritmeticka sredina parnih decimalnih znamenki: %.2f", avg);
}
