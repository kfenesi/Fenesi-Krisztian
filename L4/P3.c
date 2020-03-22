#include<stdlib.h>
#include<stdio.h>

int main() {
	int a, b, *n;
	n = (int*)malloc(sizeof(int));

	printf("Determinati valoarea lui a:\n");
	scanf("%d", &a);
	printf("Determinati valoarea lui b:\n");
	scanf("%d", &b);

	*n = a;
	a = b;
	b = *n;
	printf("a = %d, b = %d \n", a, b);

	system("pause");
	return 0;
}
