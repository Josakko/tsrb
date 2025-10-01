# include <stdio.h>

int main(void) {

	int sat, min, dodmin, ukupmin;

	printf("Upisi sate: ");
	scanf_s("%d", &sat);

	printf("Upisi minute: ");
	scanf_s("%d", &min);

	printf("Upisi dodatne minute: ");
	scanf_s("%d", &dodmin);

	ukupmin = dodmin + min;
	sat = sat + (ukupmin / 60);
	sat = sat % 24;
	ukupmin = ukupmin % 60;

	printf("Nakon proteklih %d minuta je vrijeme %d:%d", dodmin, sat, ukupmin);




}