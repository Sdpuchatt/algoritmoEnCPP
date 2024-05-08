#include <iostream>
using namespace std;

int main() // main() es donde empieza la ejecución
{
  double num1 = 0,num2 = 0,num3 = 0, num4=0;
   cout << "Vamos a multiplicar los 4 numeros que ingrese por consola. " << endl;
   cout << "Ingrese el primer numero " << endl;
   cin >> num1;
   cout << "introduzca Segundo numero " << endl;
   cin >> num2;
   cout << "ingrese el tercer numero " << endl;
   cin >> num3;
   cout << "falta el ultimo numero " << endl;
   cin >> num4;
    cout << "La multiplicacion de todos los numeros es : "<< (num1*num2*num3*num4) << endl;
   return 0;
}