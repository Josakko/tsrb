#include <stdio.h>

int main() {
    float price1, price2, price_diff, discount;

    do {
        printf("unesi cijenu nakon snizenja: ");
        scanf("%f", &price2);
    } while ((int)price2 == price2 || price2 < 0);
    
    do {
        printf("unesi postotak snizenja: ");
        scanf("%f", &discount);
    } while ((int)discount != discount || discount < 0);
    
    price1 = price2 / (1 - discount / 100);
    price_diff = price2 - price1;

    printf("cijena prije snizenja %.2f, iznos snizenja %.2f", price1, price_diff);
}