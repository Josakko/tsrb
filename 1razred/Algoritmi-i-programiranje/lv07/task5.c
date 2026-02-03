# include <stdio.h>
# include <string.h>

int main() {
	float a, b, c, max, mid, min;

	printf("Upisi 1. broj: ");
	scanf("%f", &a);

	printf("Upisi 2. broj: ");
	scanf("%f", &b);

	printf("Upisi 3. broj: ");
	scanf("%f", &c);

	max = a;
	if ((int)b > max) max = b;
	if ((int)c > max) max = c;

	min = a;
	if ((int)b < min) min = b;
	if ((int)c < min) min = c;

	mid = (a + b + c) - min - max;

	printf("Brojevi poredani od najveceg do najmanjeg po njihovim decimalnim djelovima: %.2f %.2f %.2f", max, mid, min);
}
