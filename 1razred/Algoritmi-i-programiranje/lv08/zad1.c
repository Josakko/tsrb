#include <stdio.h>

int main() {
    int ocjena, num = 0, sum = 0;

    printf("Upisi ocjenu: ");
    scanf("%d", &ocjena);
    while (ocjena > 0 && ocjena < 6) {
        num++;
        sum = sum + ocjena;
        printf("Upisi ocjenu: ");
        scanf("%d", &ocjena);
    }
    printf("Upisali ste neispravnu ocjenu.\n");
    printf("Prosjecna vrijednost upisanih ispravnih ocjena: %.2f\n", (float)sum / num);
    printf("Kraj algoritma.\n");
}