#include <iostream>
#include <limits>
#include <locale>

using namespace std;

const int MAX = 100; // Tamaño máximo de la matriz

void leerMatriz(int matriz[MAX][MAX], int n);
void mostrarMatriz(int matriz[MAX][MAX], int n);
void sumarMatrices(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX], int n);
void restarMatrices(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX], int n);
void multiplicarMatrices(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX], int n);
void transponerMatriz(int A[MAX][MAX], int T[MAX][MAX], int n) ;
void mostrarMenu() ;

int main() {
    setlocale(LC_ALL, "spanish");

    int n;
    cout << "Introduce el tamaño de la matriz (NxN): ";
    cin >> n;

    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX], T[MAX][MAX];
    
    int opcion;
    do {
        mostrarMenu();
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Matriz A:" << endl;
                leerMatriz(A, n);
                cout << "Matriz B:" << endl;
                leerMatriz(B, n);
                sumarMatrices(A, B, C, n);
                cout << "Resultado de A + B:" << endl;
                mostrarMatriz(C, n);
                break;
            case 2:
                cout << "Matriz A:" << endl;
                leerMatriz(A, n);
                cout << "Matriz B:" << endl;
                leerMatriz(B, n);
                restarMatrices(A, B, C, n);
                cout << "Resultado de A - B:" << endl;
                mostrarMatriz(C, n);
                break;
            case 3:
                cout << "Matriz A:" << endl;
                leerMatriz(A, n);
                cout << "Matriz B:" << endl;
                leerMatriz(B, n);
                multiplicarMatrices(A, B, C, n);
                cout << "Resultado de A * B:" << endl;
                mostrarMatriz(C, n);
                break;
            case 4:
                cout << "Matriz A:" << endl;
                leerMatriz(A, n);
                transponerMatriz(A, T, n);
                cout << "Transpuesta de A:" << endl;
                mostrarMatriz(T, n);
                break;               
            case 5:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción no válida" << endl;
                break;
        }
    } while (opcion != 5);

    return 0;
}

void leerMatriz(int matriz[MAX][MAX], int n) {
    cout << "Introduce los elementos de la matriz de " << n << "x" << n << ":" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matriz[i][j];
        }
    }
}

void mostrarMatriz(int matriz[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

void sumarMatrices(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void restarMatrices(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
}

void multiplicarMatrices(int A[MAX][MAX], int B[MAX][MAX], int C[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void transponerMatriz(int A[MAX][MAX], int T[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            T[j][i] = A[i][j];
        }
    }
}

void mostrarMenu() {
    cout << "Selecciona una operacion:" << endl;
    cout << "1. Sumar 2 matrices" << endl;
    cout << "2. Restar 2 matrices" << endl;
    cout << "3. Multiplicar 2 matrices" << endl;
    cout << "4. Trasponer una matriz" << endl;
    cout << "5. Salir" << endl;
}