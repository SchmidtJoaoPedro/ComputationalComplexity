#include <iostream>
using namespace std;
#include "AB.h"

int main(void) {
	ArvBin T1 = NULL;
	Tins(&T1, 5);
	Tins(&T1, 7);
	Tins(&T1, 2);
	Tins(&T1, 4);
	Tins(&T1, 0);
	Tins(&T1, 10);

	cout << "Em-ordem: ";
	emordem(T1);
	cout << endl;
	cout << "Pos-ordem: ";
	posordem(T1);
	cout << endl;
	cout << "Pre-ordem: ";
	preordem(T1);
	cout << endl;
	cout << "------------------" << endl;
	cout << "Altura: " << alturaArvore(T1);
	cout << endl;
	cout << "Maior da Numero: " << maiorNumeroArvore(T1);
	cin.get();
}