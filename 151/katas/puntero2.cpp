#include <iostream>
using namespace std;

int main() // main() es donde empieza la ejecución
{
    int num[6] = {512,345,666,767,112,123} ;
    int *punt1;
    int *punt2;

    punt1 = &num[0];
    punt2 = punt1;

    cout << num[0] << endl;
    cout << *punt1 << endl;
    cout << *punt2 << endl;
    
    *punt2++;
    cout << *punt2 << endl;

    cout << punt1 << endl; // imprimo direccion de memoria variable
    punt1++;
    cout << punt1 << endl; // se corre de direccion y muestra basura
    cout << *punt1 << endl;
    *punt1 = 128;

    int num2 = 256;
    punt1 = &num2;
    cout << *punt1 << endl;
    *punt1 ++;
    cout << *punt1 << endl;
    *punt1 ++;
    cout << *punt1 << endl;
    *punt1--;
    cout << *punt1 << endl;
    return 0;
}
