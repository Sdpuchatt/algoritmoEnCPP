// 8. Hacer un programa en C++ que pida números mientras no se escriba un número negativo.
// El programa terminará escribiendo la suma de los números introducidos.

#include <iostream>
using namespace std;
int main()
{
double numero = 0;
double suma = 0;
cout << "Ingrese un numero: " << endl;
cin >> numero;

while(numero >= 0){
    cout << "Ingrese nuevamente un numero: " << endl;
    cin >> numero;
    if(numero >= 0){
        suma = suma + numero;
    }
}
cout << "La suma de numeros ingresados es: " << suma <<endl;

return 0;

}