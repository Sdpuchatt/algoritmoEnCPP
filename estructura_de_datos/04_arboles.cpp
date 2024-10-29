/*
Un árbol binario es una estructura recursiva donde cada nodo tiene, a lo sumo, dos hijos.
*/

#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* izquierdo;
    Nodo* derecho;

    Nodo(int valor) : dato(valor), izquierdo(nullptr), derecho(nullptr) {}
};

void preorden(Nodo* nodo) {
    if (nodo == nullptr) return;
    cout << nodo->dato << " ";
    preorden(nodo->izquierdo);
    preorden(nodo->derecho);
}

int main() {
    Nodo* raiz = new Nodo(1);
    raiz->izquierdo = new Nodo(2);
    raiz->derecho = new Nodo(3);
    preorden(raiz);
    return 0;
}
