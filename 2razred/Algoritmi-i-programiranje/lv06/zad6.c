#include <stdio.h>
#include <ctype.h>
#include <string.h>

void main() {
	char a[50], b;

	fgets(a, 50, stdin);

	printf("\ntrazeno slovo: ");
	scanf(" %c", &b);
	b = tolower(b);

	int spaces = 0, n = 0;
	for (int i = 0; i < strlen(a); i++) {
		if (a[i] == ' ') spaces++;

		if (spaces == 1 && b == tolower(a[i]))
			n++;
		
	}

	if (n == 0)
		printf("slovo %c se ne pojavljuje u 2. rijeci recenice", b);
	else
		printf("slovo %c se pojavljuje %d puta u 2. rijeci recenice", b, n);

}
