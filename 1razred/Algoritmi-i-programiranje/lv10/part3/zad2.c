#include <stdio.h>

int main() {
    float a;

    do {
        printf("unesi cijeli troznamenkasti broj: ");
        scanf("%f", &a);
    } while ((int)a != a || a < 100 || a > 999);
    
    int n = a;

    int jed = n % 10;
    int des = n % 100 / 10;
    int stot = n / 100;

    

    int min = jed;
    if (stot < min) min = stot;
    if (des < min) min = des;

    printf("%d, %d, %d", stot, des, jed);

    printf("\nnajmanja znamenka: %d", min);
}