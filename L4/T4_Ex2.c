#include <stdio.h>
#include <stdlib.h>

void sum(int x[], int n, int *S) {
	int i;
	*S = 0;
	for (i = 0; i < n; i++)
		*S = *S + x[i];
}

int main() {
	int x[40], n, i, S;

	printf("Determinati numarul de elemente: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("x[%d] = ", i+1);
		scanf("%d", &x[i]);
	}

	sum(x, n, &S);
	printf("Suma elementelor introduse este: %d \n", S);

	system("pause");
	return 0;
}