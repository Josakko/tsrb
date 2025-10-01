# include <stdio.h>
# include <math.h>
int main(void) {

	int sec;

	printf("Upisi broj sekundi: ");
	scanf_s("%d", &sec);

	printf("U %d sekundi ima: ", sec);
	printf("\n");
	printf("- sati: %d", sec / 3600);
	printf("\n");
	printf("- min: %d", ((sec % 3600) / 60));
	printf("\n");
	printf("- sec: %d", sec % 60);


}