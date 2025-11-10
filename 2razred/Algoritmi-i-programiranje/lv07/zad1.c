#include <stdio.h>

void main() {
	int i, j;
	char a[5], tmp;
	
	for (i = 0; i < 5; i++) {
		printf("unesi %d. malo slovo: ", i+1);
		scanf(" %c", &a[i]);
	}
	
	for (i = 0; i < 4; i++) {
		for (j = i + 1; j < 5; j++) {
			if (a[j] < a[i]) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;

			}
		}
	}

    printf("sortirano abecednim redom: ");
	for (i = 0; i < 5; i++) {
		printf("%c ", a[i]);
	}
}
