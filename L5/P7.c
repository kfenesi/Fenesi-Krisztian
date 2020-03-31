#define _CRT_SECURE_NO_WARNINGS
#define CAPACITY 16
#include <stdio.h>
int stiva1[CAPACITY], stiva2[CAPACITY], top1 = -1, top2 = -1, binary[CAPACITY];

void push1(int nr) {
	if (top1 == CAPACITY - 1) {
		printf("Stiva plina\n");
	}
	else {
		top1++;
		stiva1[top1] = nr;
	}
}

void push2(int nr) {
	if (top2 == CAPACITY - 1) {
		printf("Stiva plina\n");
	}
	else {
		top2++;
		stiva2[top2] = nr;
	}
}

void afisare1() {
	int i;
	if (top1 == -1)
		printf("E goala\n");
	else {
		printf("Elementele stivei ce contine bitii numarului citit sunt: ");
		for (i = 0; i <= top1; i++)
			printf("%d ", stiva1[i]);
		printf("\n");
	}

}

void afisare2() {
	int i;
	if (top2 == -1)
		printf("E goala\n");
	else {
		printf("Elementele stivei ce contine cifrele numarului citit sunt: ");
		for (i = 0; i <= top2; i++)
			printf("%d ", stiva2[i]);
		printf("\n");
	}

}

int verificarePalBaza2() {
	int i, ok;
	ok = 1;
	for (i = 0; i <= top1 / 2; i++)
		if (stiva1[i] != stiva1[top1 - i])
			ok = 0;
	return ok;
}

int verificarePalBaza10() {
	int i, ok;
	ok = 1;
	for (i = 0; i <= top2 / 2; i++)
		if (stiva2[i] != stiva2[top2 - i])
			ok = 0;
	return ok;
}

int main() {
	int n, copie, rest, nr = -1, i, inv, gasit1 = 0, gasit2 = 0;

	printf("Dati numarul: ");
	scanf("%d", &n);
	if (n > 65535)
		printf("Numarul depaseste limita\n");
	else {
		//baza 2
		copie = n;
		while (copie) {
			rest = copie % 2;
			nr++;
			binary[nr] = rest;
			copie /= 2;

		}
		for (i = nr; i >= 0; i--)
			push1(binary[i]);
		afisare1();
		if (verificarePalBaza2() == 1) {
			printf("Numarul %d in baza 2 este palindrom\n", n);
			gasit1 = 1;
		}

		printf("\n");
		//baza 10
		copie = n;
		inv = 0;
		while (copie) {
			inv = inv * 10 + copie % 10;
			copie /= 10;
		}
		while (inv) {
			rest = inv % 10;
			push2(rest);
			inv = inv / 10;
		}
		afisare2();
		if (verificarePalBaza10() == 1) {
			printf("Numarul %d in baza 10 este palindrom\n", n);
			gasit2 = 1;
		}
		printf("\n");
		if (gasit1 == 1 && gasit2 == 1)
			printf("Numarul %d este palindrom atat in baza 10 cat si in baza 2\n", n);

	}
	system("pause");
	return 0;
}
