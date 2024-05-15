// Hacer un programa en C++ que pida números hasta que el usuario introduzca 99, luego
// mostrar los números y el promedio.


#include <iostream>
using namespace std;
int main(){
    double sumaNumero = 0;
    double numIngresado = 0;
    int contador = 0;
    cout << "El programa continua pidiendo datos hasta que ingrese 99"<<endl;
    while(numIngresado != 99){
        cin>> numIngresado;
        sumaNumero = sumaNumero + numIngresado;
        contador = contador + 1;
    }
    if (numIngresado == 99){
        cout << contador;
        cout << sumaNumero << endl;
        cout << (sumaNumero/double(contador)) << endl;
    }
    return 0;
}
