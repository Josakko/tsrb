#include <stdio.h>

int main() {
	int sat, min, dodmin, ukupmin;

	printf("Upisi sate: ");
	scanf("%d", &sat);

	printf("Upisi minute: ");
	scanf("%d", &min);

	printf("Upisi dodatne minute: ");
	scanf("%d", &dodmin);

	ukupmin = dodmin + min;
	sat = sat + (ukupmin / 60);
	sat = sat % 24;
	ukupmin = ukupmin % 60;

	printf("Nakon proteklih %d minuta je vrijeme %d:%d", dodmin, sat, ukupmin);
}