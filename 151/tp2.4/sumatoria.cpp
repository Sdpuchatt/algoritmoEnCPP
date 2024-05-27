// 5. Hacer un programa en C++ que pida un número y calcule la suma desde 1 hasta ese
// número , en incrementos de uno.

#include <iostream>
using namespace std;
int main()
{
double num = 0, aux = 0;
int contador = 0;

cout << "Sumaremos hasta el numero que ingrese por consola." << endl; 
cout << "Ingrece un numero para conocer su sumatoria" << endl; 
cin >> num;
while ((contador <= num)){
    aux = aux + contador;
    contador ++;
}
cout << "La sumatoria es: " << aux << endl;

return 0;

}

