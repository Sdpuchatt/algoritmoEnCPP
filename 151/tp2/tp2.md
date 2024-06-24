Tp N°2 - Unidad 2 Puchatt Sergio Daniel

Marco Teórico:
1. ¿Describir los módulos que componen un programa en C++?
Los modulos hace referencia a todas las partes que compone un programa, desde las librerias para su funcionamiento como iostream, el metodo main para que pueda correr el programa.

2. ¿Qué función cumple el “Insertor”?
El insertor son los “<<” inserta textos, Números literales o el valor de la variable por pantalla.

3. ¿Qué es Cout para qué sirve?
cout imprime por pantalla

4. ¿En qué librería está Incluido?
cout se encuentra en la libreria iostream.

5. ¿Pertenece a algún espacio de Nombres?
cout y cin se encuentran en el espacio de nombre std (using namespace std).

6. ¿Qué función cumple un espacio de Nombres?
nos evita tener que llamar la direccion cada vez que usamos algun comando cout o cin, sino deberiamos usar std::cout o st::cin.

7. ¿Describir los Operadores y dar ejemplos?
Existen operadores aritmeticos, de asignacion, comparacion, de incremento y decremento.
Aritmeticos es cuando usamos sumas restas divisiones, etc
Asignacion cuando le asignamos valor a una variable, contador = 10.
Comparación seria == o !=
decremento  - -
incremento ++

8. Que es una variable, que función cumple
Una variable es el nombre que se le da a un lugar en memoria donde va a contener un dato

9. Dar ejemplos de Variables
int numero = 20.
char letra = ‘A’

10. ¿Que diferencia hay entre Integer y Decimal?
int puede guardar datos sin coma osea enteros en cambio los decimal como float, double pueden guardar numeros racionales incluidos enteros
.
11. Dar ejemplos de operaciones entre tipos ( + - * / ) explicar que pasa en la operación.
Marco Práctico:
Desarrollar en C++ los siguientes programas:


1. Resolver y Realizar en c++
a. La suma de 45 + 34 mostrar x pantalla el resultado
b. La resta de 45 -40 mostrar le resultado x pantalla
c. La división de 46 y 3
d. Un programa que multiplique 65 * 3 con la salida en pantalla
2. Resolver usando Variables y operadores, mostrar el resultado x pantalla.
a. Calcula el volumen, de una habitación que tiene 5 m de largo, 4 m de ancho y
2.5 m de alto.
b. Escribe un programa en C++ que nos diga cuál es el volumen de un cono con
un radio de la base de 14,5 y una altura de 26,79. La fórmula que debes usar
es: (Pi x (radio)2 / altura) /3, recordar Pi=3.14.
c. ¿Modificar el programa anterior para que usen variables Dobles, que
diferencia nota? ¿Por qué?


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



/**
 * 2. Resolver usando Variables y operadores, mostrar el resultado x pantalla.
 * a. Calcula el volumen, de una habitación que tiene 5 m de largo, 4 m de ancho y 2.5 m de alto.
 * b. Escribe un programa en C++ que nos diga cuál es el volumen de un cono con un
 * radio de la base de 14,5 y una altura de 26,79. La fórmula que debes usar
 * es: (Pi x (radio)2 / altura) /3, recordar Pi=3.14.
 * c. ¿Modificar el programa anterior para que usen variables Dobles, que diferencia nota? ¿Por qué?
 */
 
#include<iostream>
#include <cmath>
using namespace std;


int main(){
double ancho = 5, largo = 4 ,alto = 2.5;
double resultado;
resultado = (ancho * largo * alto);
cout << "El volumen de una habitacion es el producto de Largo : "
<< largo << " ancho: " << ancho << " Alto: "<< alto<<" El resultado es "<< resultado << endl;
cout << "*********************************" << endl;
// Volumen de un cono
double radio = 14.5 , altura = 28.79;
resultado = ((M_PI * pow(radio,2)) / altura) / 3;


cout <<  "El volumen de un cono de radio:14.5 y altura:28.79 es " << resultado;




return 0;
}
