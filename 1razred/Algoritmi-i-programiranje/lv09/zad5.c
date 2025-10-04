#include <stdio.h>

int main() {
	int i, br, djel = 0;

	printf("Upisi neki broj: ");
	scanf("%d", &br);

	for (i = 2; i < br; i++) { // broj djelitelja izuzev 1 i br; optimizacije radi, mogli bi staviti da i ide samo do br/2
		if (br % i == 0) djel++;
	}

	if (djel == 0)
		printf("Broj je prim");

	else
		printf("Broj nije prim");

}