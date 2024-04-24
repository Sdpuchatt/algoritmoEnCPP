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

cout <<  "El volumen de un cono de base:14.5 y altura:28.79 es " << resultado;


return 0;
}