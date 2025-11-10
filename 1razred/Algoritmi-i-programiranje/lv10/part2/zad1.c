#include <stdio.h>

int main() {
    int count = 0;
    float num;

    for (int i = 0; i < 5; i++) {
        printf("Upisi realan broj: ");
        scanf("%f", &num);

        if (num == (int)num) {
            printf("Broj %.0f je cijeli.\n", num);
        }
        else {
            printf("Broj %f ima decimalni dio.\n", num);
            count++;
        }
    }

    printf("Ima %d broja s decimalnim dijelom.\n", count);
}