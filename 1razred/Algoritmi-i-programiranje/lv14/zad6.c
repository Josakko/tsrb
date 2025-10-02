#include <stdio.h>

int main(void) {

	int br;

	printf("Upisi neki broj: ");
	scanf("%d", &br);

	printf("U broju 123: \n");
	printf("-znamenka jedinica: %d\n", br % 10);
	printf("-znamenka desetica: %d\n", (br % 100) / 10);
	printf("-znamenka stotica: %d\n", br / 100);
}
