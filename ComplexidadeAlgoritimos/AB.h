#pragma once
#include <iostream>
using namespace std;

typedef struct no {
    struct no* esq;
    int info;
    struct no* dir;
}*ArvBin;

void Tins(ArvBin* T, int valor) {
    if (*T == NULL) { //inserir elemento na arvore
        *T = new no;
        (*T)->info = valor;
        (*T)->esq = (*T)->dir = NULL;
    }
    else
        if (valor < (*T)->info) {
            Tins(&((*T)->esq), valor);
        }
        else {
            Tins(&((*T)->dir), valor);
        }
}

void preordem(ArvBin T) {
    if (T != NULL) {
        cout << T->info << " ";
        preordem(T->esq);
        preordem(T->dir);
    }
}

void emordem(ArvBin T) {
    if (T != NULL) {
        emordem(T->esq);
        cout << T->info << " ";
        emordem(T->dir);
    }
}

void posordem(ArvBin T) {
    if (T != NULL) {
        posordem(T->esq);
        posordem(T->dir);
        cout << T->info << " ";
    }
}

int nivelArvore(int x, int y) {
    if (x > y) {
        return x;
    }
    else {
        return y;
    }
}
int alturaArvore(ArvBin T) {
    if (T == NULL) {
        return 0;
    }
    else return 1 + nivelArvore(alturaArvore(T->esq), alturaArvore(T->dir));
}

int maiorNumeroArvore(ArvBin T) {
    if (T == NULL) {
        return 0;
    }
    if (T->dir == NULL) {
        return (T->info);
    }
    else {
        return maiorNumeroArvore(T->dir);
    }
}

void folhas(ArvBin T) {
    if (T != NULL) {
        folhas(T->esq);
        if (T->esq == NULL && T->dir == NULL) {
            cout << T->info << ", ";
        }
        folhas(T->dir);
    }
}

int soma(ArvBin T) {
    if (T == NULL) {
        return 0;
    }
    return T->info + soma(T->esq) + soma(T->dir);
}