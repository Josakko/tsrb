#include <stdio.h>
#include <ctype.h>
#include <string.h>

void main() {
	int a[5], b;

	for (int i = 0; i < 5; i++) {
		printf("unesi %d. broj: ", i + 1);
		scanf("%d", &a[i]);
	}

	printf("\ntrazeni broj: ");
	scanf("%d", &b);

	for (int i = 0; i < 5; i++) {
		if (a[i] == b) {
			printf("broj %d se pojavljuje", b);
			break;
		}

		if (i == 4) {
			printf("broj %d se ne pojavljuje", b);
			return;
		}
	}

	printf("mjesta pojavljivanja: ");
	for (int i = 0; i < 5; i++) {
		if (a[i] == b)
			printf("%d ", i + 1);
	}

}
