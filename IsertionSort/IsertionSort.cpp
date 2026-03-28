#include <iostream>
#include <stdio.h>

void insere(int* V, int X, int N) {
	while(N > 0 && X < V[N - 1]) {
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
	for(int i = 1; i < N; i++) {
		insere(V, V[i], i);
	}
}

int main()
{
	int V[4] = { 50, 30, 60, 40 };

	insertionsort(V, 4);
	selectionsort(V, 4);

	for(int i = 0; i < 4; i++) {
		printf("%d ", V[i]);
	}
	printf("\n");
}
