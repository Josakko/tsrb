#include <stdio.h>

int main() {
	int sec;

	printf("Upisi broj sekundi: ");
	scanf("%d", &sec);

	printf("U %d sekundi ima: ", sec);
	printf("\n");
	printf("- sati: %d", sec / 3600);
	printf("\n");
	printf("- min: %d", ((sec % 3600) / 60));
	printf("\n");
	printf("- sec: %d", sec % 60);
}