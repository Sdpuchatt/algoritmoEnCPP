#include <iostream>

using namespace std;

bool esPrimo(int num);

int main() {
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    
    if (esPrimo(numero)) {
        cout << numero << " es un numero primo"<<endl;
    }
    else{
        cout << numero << " no es un numero primo!!" << endl;
    }
return 0;
}

bool esPrimo(int num) {
    int contador = 0;
    bool respuesta;
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            contador++;
        }
    }
    
    if (contador == 2) {
        respuesta = true;
    } else {
        respuesta = false;
    }
    
    return respuesta;
}