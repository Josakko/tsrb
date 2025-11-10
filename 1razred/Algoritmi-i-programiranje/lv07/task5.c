# include <stdio.h>
# include <string.h>

int main(void) {

	float a, b, c, max, sre, min;

	printf("Upisi 1. broj: ");
	scanf_s("%f", &a);

	printf("Upisi 2. broj: ");
	scanf_s("%f", &b);

	printf("Upisi 3. broj: ");
	scanf_s("%f", &c);

	max = a;
	if ((int)b > max) max = b;
	if ((int)c > max) max = c;

	min = a;
	if ((int)b < min) min = b;
	if ((int)c < min) min = c;

	sre = (a + b + c) - min - max;

	printf("Brojevi poredani od najveceg do najmanjeg po njihovim decimalnim djelovima: %.2f %.2f %.2f", max, sre, min);


}