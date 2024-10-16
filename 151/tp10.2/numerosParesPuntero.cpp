#include <iostream>
using namespace std;

int main() {
    int *p;
    int numeros[10] = {1,2,3,4,5,6,7,8,9,10};

    // Punteros a los elementos de un array    
    p = numeros;  // Puntero al array

    cout << "numeros pares y su posicion en memoria:" << endl;
    for (int i = 0; i < 10; i++) {
        if (*(p + i) % 2 == 0) {
            cout << "Numero: " << *(p + i) << " en direccion: " << (p + i) << endl;
        }
    }

    return 0;
}
