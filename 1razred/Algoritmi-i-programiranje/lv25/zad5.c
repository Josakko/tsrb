#include <stdio.h>
#include <ctype.h>


void main() {
    char a;
 
    do {
        printf("Upisi veliko slovo: ");
        scanf_s(" %c", &a);
    } while (!isupper(a));
 
    printf("Slova od pocetka abecede do slova %c: ", a);
    for (int i = 'A'; i < a; i++) 
        printf("%c ", i);
}
