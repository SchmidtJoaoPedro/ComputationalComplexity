#include <stdio.h>
#include <iostream>


void hanoi(int N, char A, char B, char C, int* X) {
	if (N == 1) {
		printf("%d: Mova o disco da torre %c para a torre %c\n", *X, A, C);
		*X = *X + 1;
	}
	else {
		hanoi(N - 1, A, C, B, X);
		printf("%d: Mova o disco da torre %c para a torre %c\n", *X, A, C);
		*X = *X + 1;
		hanoi(N - 1, B, A, C, X);
	}
}

int main()
{
	int X = 1;

	//Altere a quantidade de discos
	hanoi(4, 'A', 'B', 'C', &X);
	system("pause");
}
