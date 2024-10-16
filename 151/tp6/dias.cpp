#include <iostream>
using namespace std;

int main() {
    int dias[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int *ptr = dias;  // El puntero apunta al primer elemento del arreglo

    // Usando aritmética de punteros para recorrer todos los elementos
    for (int i = 0; i < 12; i++) {
        cout << *(ptr + i) << endl;  // Acceder a los elementos usando el puntero
    }

    return 0;
}
