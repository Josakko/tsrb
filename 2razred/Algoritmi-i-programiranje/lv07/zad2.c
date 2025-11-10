#include <stdio.h>

void main() {
	int a[5], tmp;
    int i, j;

	for (i = 0; i < 5; i++) {
		printf("unesi %d. broj: ", i+1);
		scanf("%d", &a[i]);
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

    printf("brojevi poredani po redu (od najmanjeg do najveceg): ");
	for (i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}
}

