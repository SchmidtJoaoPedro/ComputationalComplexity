#include <iostream>
#include <stdio.h>

void insere(int* V, int X, int N) {
	while (N > 0 && X < V[N - 1]) {
		V[N] = V[N - 1];
		N--;
	}
	V[N] = X;
}

void troca(int* A, int* B) {
	int X = *A;
	*A = *B;
	*B = X;
}

int seleciona(int* V, int N) {
	int i = 0;
	for (int j = 1; j < N; j++) {
		if (V[j] > V[i]) {
			i = j;
		}
	}
	return i;
}

void selectionsort(int* V, int N) {
	while (N > 1) {
		troca(&V[seleciona(V, N)], &V[N - 1]);
		N--;
	}
}

void insertionsort(int* V, int N) {
	for (int i = 1; i < N; i++) {
		insere(V, V[i], i);
	}
}

void bubblesort(int* V, int N, int* pC, int* pT) {
	int i, k;
	while (N > 0) {
		i = 0;
		while (i < N - 1) {
			*pC = *pC + 1; // Contagem de comparações
			if (V[i] > V[i + 1]) { // Troca
				k = V[i];
				V[i] = V[i + 1];
				V[i + 1] = k;
				*pT = *pT + 1; // Contagem de trocas
			}
			i++;
		}
		N--;
	}
}

int main()
{
	int V[6] = { 50, 30, 60, 40, 20, 10};
	int i, C=0, T=0;

	//insertionsort(V, 4);
	//selectionsort(V, 4);
	bubblesort(V, 6,&C,&T);

	for (int i = 0; i < 6; i++) {
		printf("%d ", V[i]);
	}
	printf("\n");

	printf("Comparacoes: %d\n", C);
	printf("Trocas: %d\n", T);
}
