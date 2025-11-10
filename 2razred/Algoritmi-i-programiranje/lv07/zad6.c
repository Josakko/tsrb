#include <stdio.h>

void main() {
	int i, j;

	float a[5];
	for (i = 0; i < 5; i++) {
		printf("unesi %d. broj: ", i+1);
		scanf("%f", &a[i]);
	}

    float dec[5]; int n_dec = 0;
    int wh[5]; int n_wh = 0;
    for (i = 0; i < 5; i++) {
        if ((int)a[i] == a[i]) { // a[i] - (int)a[i] == 0.f
            wh[n_wh] = a[i];
            n_wh++;
        } else {
            dec[n_dec] = a[i];
            n_dec++;
        }
    }

    float tmp;
	for (i = 0; i < 4; i++) {
		for (j = i + 1; j < 5; j++) {
			if (a[j] < a[i]) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}

	for (i = 0; i < n_dec - 1; i++) {
		for (j = i + 1; j < n_dec; j++) {
			if (dec[j] < dec[i]) {
				tmp = dec[i];
				dec[i] = dec[j];
				dec[j] = tmp;
			}
		}
	}

    int _tmp;
	for (i = 0; i < n_wh - 1; i++) {
		for (j = i + 1; j < n_wh; j++) {
			if (wh[j] < wh[i]) {
				_tmp = wh[i];
				wh[i] = wh[j];
				wh[j] = _tmp;
			}
		}
	}

	printf("sortirani nizovi (od najmanjeg do najveceg):");

    printf("\n- orginalni niz: ");
	for (i = 0; i < 5; i++) {
		printf("%.2f ", a[i]);
	}

    printf("\n- niz decimalnih: ");
	for (i = 0; i < n_dec; i++) {
		printf("%.2f ", dec[i]);
	}

    printf("\n- niz cijelih: ");
	for (i = 0; i < n_wh; i++) {
		printf("%d ", wh[i]);
	}
}
