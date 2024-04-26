#include <iostream>
#include <cmath>
using namespace std;
int main()
{
double base = 0, altura = 0, resultado = 0;
cout << "Vamos a calcular el area de un triangulo" << endl; 
cout << "Introduzca la base:";
cin >> base;
cout << "Introduzca la altura:"; 
cin >> altura;
resultado = (base + altura)/2;
cout << "El area del triangulo es :" << resultado << endl;

return 0;


}