#include <stdio.h>

int main() {
    int num, jed, des, sto;

    printf("Upisi broj: ");
    scanf("%d", &num);

    while (num > 99 && num < 1000) {
        sto = num / 100;
        des = num % 100 / 10;
        jed = num % 10;
        printf("Srednja vrijednost znamenki: %.2f\n", (sto + des + jed) / 3.0f);

        printf("Upisi broj: ");
        scanf("%d", &num);
    }

    printf("Niste upisali troznamenkast broj. Kraj algoritma.\n");
}