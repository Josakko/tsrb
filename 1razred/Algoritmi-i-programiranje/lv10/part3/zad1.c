#include <stdio.h>

int main() {
    float a;

    do {
        printf("unesi cijeli broj: ");
        scanf("%f", &a);
    } while ((int)a != a);
    
    int abs = a;
    if (abs < 0)
        abs *= -1;
    
    printf("|%.0f| = %d", a, abs);
}