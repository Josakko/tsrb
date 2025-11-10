/* NOTE: 
from the example it seems that if we are given an word with uneven length we shall split it so that 
*the first half is shorter than the second one*
*/
#include <stdio.h>
#include <string.h>

void main() {
	char word[20], tmp;
	int i, j;

	printf("unesi rijec: ");
	fgets(word, 20, stdin);
    
	int n = strlen(word)-1; // wtf bro (some shit (probably line break (enter) ) adds one more char)
	int n_half = n / 2 - 1; // divide with 2 to get the length of the first half then subtract 1 to get the index of last element (if word length is uneven the first half is going to be shorter than the second one)
    n--; // get index of last element from length

	for (i = 0; i <= n_half - 1; i++) {
		for (j = i + 1; j <= n_half; j++) {
			if (word[j] < word[i]) {
				tmp = word[i];
				word[i] = word[j];
				word[j] = tmp;

			}
		}
	}

	for (i = n_half + 1; i <= n - 1; i++) {
		for (j = i + 1; j <= n; j++) {
			if (word[j] > word[i]) {
				tmp = word[i];
				word[i] = word[j];
				word[j] = tmp;

			}
		}
	}

	printf("rijec s prvom polovicom sortirato od A do Z, a drugom od Z do A: %s", word);
}
