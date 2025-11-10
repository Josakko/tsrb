#include <stdio.h>

void main() {
	int i, j;
	float a[5], tmp;

	for (i = 0; i < 5; i++) {
		printf("unesi %d. broj: ", i+1);
		scanf("%f", &a[i]);
	}

	for (i = 0; i < 4; i++) {
		for (j = i + 1; j < 5; j++) {
			if ( (a[j] - (int)a[j]) > (a[i] - (int)a[i]) ) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}

	printf("brojevi sortirani po decimalnim djelovima (od najveceg do najmanjeg): ");
	for (i = 0; i < 5; i++) {
		printf("%.2f ", a[i]);
	}
}

