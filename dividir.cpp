#include <iostream>
using namespace std;

int main()
{
double resultado = 0 ,divisor = 1;
int dividendo = 0;
cout << "Ingrese el numero a dividir" << endl;
cin >> dividendo;
cout << "Ingrese el divisor" << endl; 
cin >> divisor;
resultado = dividendo / divisor;
cout << "El resultado de dividir " << dividendo << "/"<<divisor<< " = " << resultado << endl;


return 0;
}


