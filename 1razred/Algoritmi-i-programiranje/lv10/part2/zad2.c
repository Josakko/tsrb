#include <stdio.h>

int main() {
    int a, b;

    do {
        printf("Upisi prvi broj: ");
        scanf("%d", &a);
        printf("Upisi drugi broj: ");
        scanf("%d", &b);
    } while (!(a < b));

    for (int i = a; i <= b; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
        }
    }
    printf("\nKraj algoritma.\n");
}