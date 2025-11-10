#include <stdio.h>
#include <ctype.h>

void main() {
	int a[5], b;

	for (int i = 0; i < 5; i++) {
		printf("unesi %d. broj: ", i + 1);
		scanf("%d", &a[i]);
	}

	printf("\ntrazeni broj: ");
	scanf("%d", &b);

	int j = 0, places[5];
	for (int i = 0; i < 5; i++) {
		if (a[i] == b) {
			places[j] = i;
			j++;
		}
	}

	printf("mjesta pojavljivanja: ");
	for (int i = 0; i < j; i++) {
		printf("%d ", places[i] + 1);
	}

}
