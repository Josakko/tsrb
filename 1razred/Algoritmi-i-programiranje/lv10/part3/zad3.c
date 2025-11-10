#include <stdio.h>

int main() {
    float a;

    do {
        printf("unesi decimalni broj: ");
        scanf("%f", &a);
    } while ((int)a == a);
    
    int n = (a - (int)a) * 1000;

    int jed = n % 10;
    int des = n % 100 / 10;
    int stot = n / 100;

    float avg = (jed + des + stot) / 3.F;

    printf("%d, %d, %d", stot, des, jed);
    printf("\nsrednja vrijednost desetina, stotnina i tisućnina je %.2f", avg);

}