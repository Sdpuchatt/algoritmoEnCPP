// 1. Crear un programa por consola que convierta Grados Centígrados en Fahrenheit y
// viceversa, el programa debe preguntar qué operación desea hacer el usuario.
// Grados Fahrenheit = (grados centígrados × 9/5) +32.
// grados celsius = restar 32 y luego multiplicar por 5/ 9
#include <iostream>
#include <cstdlib>
using namespace std;

void convertirCelsiusFahrenheit(double celsius);
void convertirFahrenheitCelcius(double Fahrenheit);


int main(){
    double grados = 0;
    int opcion = 0;
    bool repetir = true;


    do{
       
        cout << "\n\n\t\t\tMENU PRINCIPAL" << endl;
        cout << "\t\t\t--------------" << endl;
        cout << "\n\t 1. Convertir de grados celcius a Fahrenheit" << endl;
        cout << "\t 2. Convertir de grados Fahrenheit a celsius" << endl;
        cout << "\t 0. SALIR" << endl;

        cout << "\n\t Ingrese una opcion: ";
        cin >> opcion;

        switch(opcion){
            case 1:
                cout <<"\t Ingrese los grados a convertir Celsius: "<<endl;
                cin >> grados;
                convertirCelsiusFahrenheit(grados);
                break;
            case 2:
                cout <<"\t Ingrese los grados a convertir Fahrenheit"<<endl;
                cin >> grados;
                convertirFahrenheitCelcius(grados);
            case 0: 
                repetir = false;
                break;
        }
    }while(repetir);
   
    
    return 0;
}

void convertirCelsiusFahrenheit(double celsius){
// Grados Fahrenheit = (grados centígrados × 9/5) +32.
cout<<"\t Se convirtio "<<celsius<<" celsius a "<<((celsius*9.0/5.0)+32)<< " Fahrenheit" << endl;
};
void convertirFahrenheitCelcius(double Fahrenheit){
// grados celsius = restar 32 y luego multiplicar por 5/ 9
cout<<"\t Se convirtio "<<Fahrenheit<<" Fahrenheit a "<<((Fahrenheit-32)*5.0/9.0)<< " Celsius" << endl;
};