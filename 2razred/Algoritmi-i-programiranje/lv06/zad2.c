#include <stdio.h>
#include <ctype.h>

void main() {
	char a[6], b;

	for (int i = 0; i < 6; i++) {
		printf("unesi %d. slovo: ", i + 1);
		scanf(" %c", &a[i]);
	}

	printf("\ntrazeno slovo: ");
	scanf(" %c", &b);
	b = tolower(b);

	for (int i = 0; i < 6; i++) {
		if (b == tolower(a[i])) {
			if (i <= 2)
				printf("slovo '%c' prvi se puta pojavljuje u prvoj polovini niza", b);
			else 
				printf("slovo '%c' prvi se puta pojavljuje u drugoj polovini niza", b);
			return;
		}
	}

	printf("Ne pojavljuje se.");
}
