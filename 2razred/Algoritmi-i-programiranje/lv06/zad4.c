#include <stdio.h>

void main() {
	float a[5], b;

	for (int i = 0; i < 5; i++) {
		printf("unesi %d. broj: ", i + 1);
		scanf("%f", &a[i]);
	}

	printf("\ntrazeni broj: ");
	scanf("%f", &b);

	int n = 0;
	for (int i = 0; i < 5; i++)
		if (b == a[i]) n++;

	if (n != 0)
		printf("broj %.2f se pojavljuje %d puta", b, n);
	else
		printf("broj %f.2 se ne pojavljuje u nizu", b);
}
