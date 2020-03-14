#include<stdio.h>
#include<stdlib.h>

int main() {
	int N, i, a, x = 0;

	printf("Determinati lungimea sirului!\n");
	scanf("%d", &N);
	
	for (i = 0; i < N; i++) {
		scanf("%d", &a);
		x |= a;
	}
	printf("x are valoarea %d \n", x);
	x &= 1;

	if (x == 0)
		printf("\n Operatia BINARA de 'SAU' (OR) rezulta un numar par \n", N);
	else
		printf("\n Operatia BINARA de 'SAU' (OR) rezulta un numar impar \n", N);

	system("pause");
	return 0;
}