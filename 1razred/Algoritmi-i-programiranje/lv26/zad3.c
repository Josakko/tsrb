#include <stdio.h>

void main() {
    int a[5];
    
    for (int i = 0; i < 5; i++) {
        printf("enter %d. num: ", i + 1);
        scanf("%d", &a[i]);
    }

    int max = a[0];
    for (int i = 1; i < 5; i++) {
        if (a[i] > max) max = a[i];
    }

    printf("max: %d", max);
}