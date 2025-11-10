# include <stdio.h>

int main() {
	int i;

	printf("Brojevi sa parnim zbrojem znamenki: ");

	for (i = 10; i <= 20; i++) {
		if ((i / 10 + i % 10) % 2 == 0)
			printf("%d ", i);

	}
}
