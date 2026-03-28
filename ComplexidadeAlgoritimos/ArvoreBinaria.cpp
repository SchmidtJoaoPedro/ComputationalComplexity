#include <iostream>
using namespace std;
#include "AB.h"

int main(void) {
	ArvBin T1 = NULL;
	Tins(&T1, 5);
	Tins(&T1, 8);
	Tins(&T1, 2);
	Tins(&T1, 6);
	Tins(&T1, 1);

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
	cout << endl;
	cout << "Folhas:";
	folhas(T1);
	cout << endl;
	cout << "Soma total:" << soma(T1);
	cin.get();
}