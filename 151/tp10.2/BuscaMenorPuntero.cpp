#include <iostream>
using namespace std;

int main() {
    int *p;
    cout << "Introducir el tamanio del arreglo: ";
    int tamanio;
    cin >> tamanio;

    int *arr = new int[tamanio];
    cout << "Introducir los elementos del arreglo: ";
    for (int i = 0; i < tamanio; i++) {
        cin >> arr[i];
    }
    
    p = arr;
    int menor = *p;  // Inicializar con el primer elemento del arreglo
    for (int i = 1; i < tamanio; i++) {
        if (*(p + i) < menor) {
            menor = *(p + i);
        }
    }

    cout << "El menor elemento es: " << menor << endl;

    delete[] arr;  // Liberar memoria dinámica
    return 0;
}
