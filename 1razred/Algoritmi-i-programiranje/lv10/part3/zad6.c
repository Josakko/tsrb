#include <stdio.h>

int main() {
    float a1, a2;

    do {
        printf("unesi 1. prirodni broj: ");
        scanf("%f", &a1);
    } while ((int)a1 != a1 || a1 < 0);
    
    do {
        printf("unesi 2. prirodni broj: ");
        scanf("%f", &a2);
    } while ((int)a2 != a2 || a2 < 0);
    
    int n1 = a1;
    int n2 = a2;

    int lim = n1;
    if (n2 < lim)
        lim = n2;

    for (int i = 2; i <= lim; i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            printf("najmanji zajednicki djelitelj brojeva %d i %d je %d", n1, n2, i);
            return 0;
        }
    }

    printf("brojevi nemaju zajednickog djelitelja (osim 1)");
}