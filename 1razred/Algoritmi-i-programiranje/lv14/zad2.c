#include <stdio.h>
#include <math.h>

int main(void) {
	float br;

	printf("Upisi neki broj: ");
	scanf("%f", &br);

	printf("Drugi korijen iz: \n");
	printf("-cjelog dijela broja %.2f: %.2f\n", br, sqrt((int)br));
	printf("-decimalnog dijela broja %.2f: %.2f", br, sqrt(br - (int)br));
}