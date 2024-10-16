#include <iostream>
using namespace std;

void ordenar(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (*(arr + i) > *(arr + j)) {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

int main() {
    int n;
    
    cout << "Introduce el tamaño del arreglo: ";
    cin >> n;

    int *arr = new int[n];
    cout << "Introduce los elementos del arreglo: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ordenar(arr, n);

    cout << "Arreglo ordenado: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;  // Liberar memoria dinámica
    return 0;
}
