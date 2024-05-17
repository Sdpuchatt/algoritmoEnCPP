#include <iostream>
using namespace std;

void esPrimo(int num);

int main() {
    int num = 0;
    cout << "Ingrese un numero para saber si es primo o no: ";
    cin >> num;

    esPrimo(num);
    return 0;
}

void esPrimo(int num) {
    if (num <= 1) {
        cout << "El numero " << num << " NO es PRIMO!" << endl;
        return;
    }

    bool es_primo = true;

    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            es_primo = false;
            break;
        }
    }

    if (es_primo) {
        cout << "El numero " << num << " es PRIMO!" << endl;
    } else {
        cout << "El numero " << num << " NO es PRIMO!" << endl;
    }
}