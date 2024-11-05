#include <iostream>
using namespace std;

void sumaMatrices(int **matA, int **matB, int **matC, int filas, int cols) {
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < cols; ++j) {
            matC[i][j] = matA[i][j] + matB[i][j];
        }
    }
}

int main() {
    int filas, cols;
    cout << "Ingrese el número de filas y columnas: ";
    cin >> filas >> cols;

    // Creación dinámica de matrices
    int **matA = new int*[filas];
    int **matB = new int*[filas];
    int **matC = new int*[filas];
    for (int i = 0; i < filas; ++i) {
        matA[i] = new int[cols];
        matB[i] = new int[cols];
        matC[i] = new int[cols];
    }

    cout << "Ingrese elementos de la matriz A:" << endl;
    for (int i = 0; i < filas; ++i)
        for (int j = 0; j < cols; ++j)
            cin >> matA[i][j];

    cout << "Ingrese elementos de la matriz B:" << endl;
    for (int i = 0; i < filas; ++i)
        for (int j = 0; j < cols; ++j)
            cin >> matB[i][j];

    sumaMatrices(matA, matB, matC, filas, cols);

    cout << "Suma de las matrices:" << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < cols; ++j)
            cout << matC[i][j] << " ";
        cout << endl;
    }

    // Liberar memoria
    for (int i = 0; i < filas; ++i) {
        delete[] matA[i];
        delete[] matB[i];
        delete[] matC[i];
    }
    delete[] matA;
    delete[] matB;
    delete[] matC;

    return 0;
}
