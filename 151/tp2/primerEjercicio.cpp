#include <iostream>
using namespace std;
//a. La suma de 45 + 34 mostrar x pantalla el resultado
//b. La resta de 45 -40 mostrar le resultado x pantalla
//c. La división de 46 y 3
//d. Un programa que multiplique 65 * 3 con la salida en pantalla

int main()
{
    //declaracion de variables
double num1, num2, resultado;

//suma
cout << "****** Resolución 1). a._ b._ c._ d._ ********" << endl;
num1 = 45;
num2 = 34;
resultado = num1 + num2; 
cout << "a)_ La suma de 45 + 34 = " << resultado << endl ;
cout << "**********************************************"<< endl;

//resta
num1 = 45;
num2 = -40;
resultado = num1 + num2;
cout << "b)_ La resta de 45 - 40 = " << resultado << endl ;
cout << "**********************************************"<< endl;

//division
num1 = 43;
num2 = 3;
resultado = num1 / num2;
cout << "c)_ La division de 43 / 3 = " << resultado << endl ;
cout << "**********************************************"<< endl;

//multiplicacion
num1 = 63;
num2 = 3;
resultado = num1 * num2;
cout << "d)_ La multiplicacion de 63 * 3 = " << resultado << endl ;
cout << "**********************************************"<< endl;

return 0;

}