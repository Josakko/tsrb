#include <stdio.h>

int main(void) {
	int oc1, oc2, oc3;
	float ar;

	printf("Upisi 3 ocjene: ");
	scanf("%d %d %d", &oc1, &oc2, &oc3);

	if (oc1 > 5 || oc1 < 1 || oc2 > 5 || oc2 < 1 || oc3 > 5 || oc3 < 1) {
		printf("Nisu ispravno upisane ocjene!");
	} else {
		ar = (oc1 + oc2 + oc3) / 3.0;
		printf("Aritmeticka sredina upisanih brojeva %d, %d i %d je %.2f", oc1, oc2, oc3, ar);
	}
	
}
