#include <stdio.h>

int main() {
    int par = 0, nepar = 0, num;

    printf("Upisi broj: ");
    scanf("%d", &num);
    while (num != 0) {
        if (num % 2 == 0)
            par++;
        else
            nepar++;

        printf("Upisi broj: ");
        scanf("%d", &num);
    }

    printf("Parnih brojeva: %d\n", par);
    printf("Neparnih brojeva: %d\n", nepar);
    printf("Kraj algoritma.\n");
}