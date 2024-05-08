// f. Escribe un programa en C++ que lea del teclado un número (real) de grados
// Fahrenheit y lo convierta a Celsius mostrando el resultado en la pantalla. ºC =
// 5 / 9 x (ºF ‐ 32)

#include <iostream>
using namespace std;

int main() // main() es donde empieza la ejecución
{
   double fahrenheit = 0;
   double resultado = 0;
   cout << "De Fahrenheit a Celsius"<<endl;
   cout << "Ingrese la temperatura en grado Fahrenheit que desea convertir"<<endl;
   cin >> fahrenheit;
   cin.sync();
   resultado = 5.0/9.0*(fahrenheit-32);
   cout << "Son "<<resultado<<" grados celsius"<<endl;
   return 0;
}
