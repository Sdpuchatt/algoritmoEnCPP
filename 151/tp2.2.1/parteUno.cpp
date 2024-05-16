// 1. Crear un programa por consola que convierta Grados Centígrados en Fahrenheit y
// viceversa, el programa debe preguntar qué operación desea hacer el usuario.
// Grados Fahrenheit = (grados centígrados × 9/5) +32.
// grados celsius = restar 32 y luego multiplicar por 5/ 9
#include <iostream>
using namespace std;

void convertirCelsiusFahrenheit(double celsius);
void convertirFahrenheitCelcius(double Fahrenheit);


int main(){
    int opcion = 0;
    bool repetir = true;
    double grados = 0;
    do{
        cout <<"Elija una opcion" << endl;
        cout <<"Opcion 1 para convertir de grados celcius a Fahrenheit"<<endl;
        cout <<"Opcion 2 para convertir de grados Fahrenheit a celsius"<<endl;
        cin >> opcion;

        switch(opcion){
            case 1:
                cout <<"Ingrese los grados a convertir"<<endl;
                cin >> grados;
                convertirCelsiusFahrenheit(grados);
                break;
            case 2:
                cout <<"Ingrese los grados a convertir"<<endl;
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
cout<<"Se convirtio "<<celsius<<"celsius a "<<((celsius*9.0/5.0)+32)<< "Fahrenheit" << endl;
};
void convertirFahrenheitCelcius(double Fahrenheit){
// grados celsius = restar 32 y luego multiplicar por 5/ 9
cout<<"Se convirtio "<<Fahrenheit<<"Fahrenheit a "<<((Fahrenheit-32)*5.0/9.0)<< "Celsius" << endl;
};