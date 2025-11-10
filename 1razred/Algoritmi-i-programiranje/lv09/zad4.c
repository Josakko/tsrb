#include <stdio.h> 

int main() {
	float br, max = -2147483648; // smallest 4B signed int is -2^31 bcs one bit falls of for the sign, and largest it (2^31)-1 bcs 0 and positive ints have same sign bit

	for (int i = 0; i < 5; i++) {
		printf("Upisi %d. broj: ", i + 1);
		scanf("%f", &br);

		if ((int)br == br && br > max)
			max = br;

	}

	printf("Najveci cijeli broj: %.0f", max);
}