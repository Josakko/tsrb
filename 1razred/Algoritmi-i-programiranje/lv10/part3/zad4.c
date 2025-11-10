#include <stdio.h>

int main() {
    float a, b, c;

    do {
        printf("unesi cijeli broj: ");
        scanf("%f", &a);
    } while ((int)a != a);
    
    do {
        printf("unesi cijeli broj: ");
        scanf("%f", &b);
    } while ((int)b != b);

    do {
        printf("unesi cijeli broj: ");
        scanf("%f", &c);
    } while ((int)c != c);

    float min = a;
    if (b < min) min = b;
    if (c < min) min = c;

    float mid = a;
    if ((a < b && b < c) || (c < b && b < a)) mid = b;
    if ((b < c && c < a) || (a < c && c < b)) mid = c;

    float max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    // float mid = (a + b + c) - (min + max);

    printf("%.0f, %.0f, %.0f", min, mid, max);
}
