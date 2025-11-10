#include <stdio.h>

void main() {
	int a[5], b;
	
	for (int i = 0; i < 5; i++) {
		printf("unesi %d. broj: ", i + 1);
		scanf("%d", &a[i]);
	}

	printf("\ntrazeni broj: ");
	scanf("%d", &b);

	for (int i = 0; i < 5; i++) {
		if (b == a[i]) {
			printf("Broj %d se pojavljuje u nizu.", b);
			return;
		}
	}
	
	printf("Ne pojavljuje se.");
}
