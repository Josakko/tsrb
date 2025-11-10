#include <stdio.h>
#include <ctype.h>
#include <string.h>

void main() {
	char a[50], b;

	fgets(a, 50, stdin);

	printf("\ntrazeno slovo: ");
	scanf(" %c", &b);
	b = tolower(b);

	int n1 = 0, n2 = 0;
	int n = strlen(a);
	for (int i = 0; i < n; i++) {
		if (b == tolower(a[i])) {
			if (i <= n / 2)
				n1++;
			else
				n2++;
		}
	}

		if (n1 > n2)
			printf("Slovo %c vise se pojavljuje u prvoj polovini rijeci", b);
		else if (n2 > n1)
			printf("Slovo %c vise se pojavljuje u drugoj polovini rijeci", b);
		else 
			printf("Slovo %c se isti broj puta pojavljuje u prvoj i u drugoj polovini rijeci", b);

}
