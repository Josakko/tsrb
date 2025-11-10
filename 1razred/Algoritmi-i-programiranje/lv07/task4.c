#include <stdio.h>
#include <math.h>
int main(void) {

	int br, sto, des, jed, max, min, sre;

	printf("Upisi broj: ");
	scanf_s("%d", &br);

	sto = br / 100;
	des = (br % 100) / 10;
	jed = br % 10;

	max = sto;
	if (des > max) max = des;
	if (jed > max) max = jed;

	min = sto;
	if (des < min) min = des;
	if (jed < min) min = jed;

	sre = (sto + des + jed) - max - min;

	printf("Znamenke poredane od najvece do najmanje: %d %d %d", max, sre, min);

}