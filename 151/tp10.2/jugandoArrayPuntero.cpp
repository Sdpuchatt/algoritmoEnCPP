#include <iostream>
using namespace std;

int main() {
    int *p;
    double *dp;
    int numeros[10] = {1,2,3,4,5,6,7,8,9,10};
    double doble = 12.5;
    // Punteros a los elementos de un array    
    p = numeros;  // Puntero al array
    dp = &doble;

    cout << "Punteros" << endl;
    cout << *p << endl;
    cout << *dp << endl;

    cout << "Numeros" << endl;
    for (int i = 0; i < 10; i++) {
        cout << *(p + i) << endl;
    }

    return 0;
}