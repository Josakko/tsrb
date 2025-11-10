#include <stdio.h>

int main() {
    int n = 0;
    float in;


    printf("Upisi prirodan broj: ");
    scanf("%f", &in);
    while (in != (int)in || in < 0) {
        printf("Upisi prirodan broj: ");
        scanf("%f", &in);
    }

    while (in >= 1) {
        in = in / 10;
        n++;
    }

    printf("Znamenki u broju: %d", n);
}