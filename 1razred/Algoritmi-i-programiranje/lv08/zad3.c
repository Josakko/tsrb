#include <stdio.h>

int main() {
    float num;
    int poz, neg;

    printf("Upisi broj: ");
    scanf("%f", &num);
    while (num != (int)num) {
        if (num < 0)
            neg++;
        else
            poz++;
        printf("Upisi broj: ");
        scanf("%f", &num);
    }

    if (poz == neg) {
        printf("Upisan je jednak broj pozitivnih i negativnih brojeva.");
    }
    else if (poz > neg) {
        printf("Upisan je veci broj pozitivnih nego negativnih brojeva.");
    }
    else {
        printf("Upisan je manji broj pozitivnih nego negativnih brojeva.");
    }
    printf(" Kraj algoritma.\n");
}