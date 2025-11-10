#include <stdio.h>

int main() {
    float in;
    int num;
    printf("Upisi prirodan broj: ");
    scanf("%f", &in);
    while (in != (int)in || in < 0) {
        printf("Upisi prirodan broj: ");
        scanf("%f", &in);
    }
    num = (int)in;

    for (int i = 2; i < num / 2; i++) {
        printf("%d\n", i);
        if (num % i == 0) {
            printf("Broj %d nije prim.\n", num);
            return 0;
        }
    }

    printf("Broj %d je prim.\n", num);
}