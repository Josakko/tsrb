#include <stdio.h>
 

void main() {
    int a;
 
    do {
        printf("Upisi prirodan broj: ");
        scanf("%d", &a);
    } while (a <= 0);
 
 
    printf("Djelitelji broja %d: ", a);
    for (int i = 1; i <= (a / 2); i++) {
        if (a % i == 0) printf("%d ", i);
    }
 
    printf("%d", a);
}