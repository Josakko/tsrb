#include <stdio.h>

void main() {
	float a[5];
	int i, j;

	for (i = 0; i < 5; i++) {
		printf("unesi %d. broj: ", i+1);
		scanf("%f", &a[i]);
	}

	int wh[5], tmp;
	for (i = 0; i < 5; i++)
		wh[i] = (int)a[i];

	for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (wh[j] < wh[i]) {
                tmp = wh[i];
                wh[i] = wh[j];
                wh[j] = tmp;

            }
        }
    }

	printf("Sortirani brojevi po cijelim dijelovima (od najmanjeg do najveceg): ");
	for (i = 0; i < 5; i++)
		printf(" %d", wh[i]);
}

