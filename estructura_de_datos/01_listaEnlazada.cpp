/*Una lista enlazada es una colección de nodos donde cada 
nodo contiene un valor y un puntero al siguiente nodo.
*/

#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* next;
};

void insertar(Nodo*& head, int valor) {
    Nodo* nuevo = new Nodo();
    nuevo->dato = valor;
    nuevo->next = head;
    head = nuevo;
}

void mostrar(Nodo* head) {
    while (head != nullptr) {
        cout << head->dato << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    Nodo* head = nullptr;
    insertar(head, 5);
    insertar(head, 3);
    insertar(head, 2);
    insertar(head, 1);
    mostrar(head);
    return 0;
}
