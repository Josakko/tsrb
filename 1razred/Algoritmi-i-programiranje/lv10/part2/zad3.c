#include <stdio.h>

int main() {
    int max = -0x7FFFFFFF, min = 0x7FFFFFFF, num;
    float decNum;

    for (int i = 0; i < 5; i++) {
        do {
            printf("Upisi %d. cijeli broj: ", i + 1);
            scanf("%f", &decNum);
        } while (decNum != (int)decNum);

        num = (int)decNum;

        if (num > max) {
            max = num;
        }
        else if (num < min) {
            min = num;
        }
    }

    printf("Najveci broj je %d, a najmanji je %d\n", max, min);
}