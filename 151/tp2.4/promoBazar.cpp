// 1. Hacer un programa en C++ para un bazar que tiene una promo de descuento para vender
// al mayor, esta dependerá del número de Productos que se compren. Si son más de diez, se
// les dará un 12% de descuento sobre el total de la compra; si el número de productos es
// mayor de veinte pero menor de treinta, se le otorga un 25% de descuento; y si son más
// treinta productos de le otorgará un 40% de descuento. El precio de cada producto es de
// $80.

#include <iostream>
using namespace std;

void promocion(int x);

int main()
{
int cantidadProductos = 0;
cout << "\n Ingrese la cantidad de productos que compro: "; 
cin >> cantidadProductos;

promocion(cantidadProductos);
return 0;

}

void promocion(int cantidadProductos){
    if( cantidadProductos >= 30){
        cout << "\n Tiene un descuento del % 40, debe abonar: "<< (cantidadProductos*80)*0.6 ;
    }
    else if ( cantidadProductos < 30 && cantidadProductos >= 20){
        cout << "\n Tiene un descuento del % 25, debe abonar: "<< (cantidadProductos*80)*0.75 ;
    }
    else {
        cout << "\n Tiene un descuento del % 12, debe abonar: "<< (cantidadProductos*80)*0.88 ;
    }
}


// 2. Hacer un programa en C++ para ayudar a un trabajador a saber cuál será su salario
// semanal, se sabe que si trabaja 40 horas o menos, se le pagará $200 por hora, pero si
// trabaja más de 40 horas entonces las horas extras se le pagarán a $250 por hora.
// 3. Hacer un programa en C++ para determinar el promedio de tres notas y determinar si el
// estudiante aprobó o no.

// 4. Hacer un programa en C++ que pida números hasta que el usuario introduzca 99, luego
// mostrar los números y el promedio.

// 5. Hacer un programa en C++ que pida un número y calcule la suma desde 1 hasta ese
// número , en incrementos de uno.

// 6. Hacer un programa en C++ para Calcular la suma de los números pares e impares
// comprendidos entre 1 y n (n lo introduce el usuario).

// 7. Hacer un programa en C++ que pida dos números enteros. El programa pedirá de nuevo el
// segundo número mientras no sea mayor que el primero. El programa terminará
// escribiendo los dos números.

// 8. Hacer un programa en C++ que pida números mientras no se escriba un número negativo.
// El programa terminará escribiendo la suma de los números introducidos.