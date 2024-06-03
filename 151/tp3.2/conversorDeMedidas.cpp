#include <iostream>
using namespace std;
void convertirCelsiusFahrenheit();
void mostrarMenuPrincipal();
void convertirLibrasAKilogramo();
void convertirCentimetrosAPugadas();

int main()
{

mostrarMenuPrincipal(); 

return 0;

}

void mostrarMenuPrincipal()
{
    int opcion;
    bool repetir = true;

    do
    {
        cout << "\n\n\t\t\tMENU PRINCIPAL" << endl;
        cout << "\t\t\t--------------" << endl;
        cout << "\n\t1. Centímetros a pulgadas"<< endl;
        cout << "\t2. Celsius a Farenheit" << endl;
        cout << "\t3. Libras a kilogramos" << endl;
        cout << "\t0. SALIR" << endl;

        cout << "\n\tIngrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
            case 1:
                convertirCentimetrosAPugadas();
                break;

            case 2:
                convertirCelsiusFahrenheit();
                break;
            
            case 3:
                convertirLibrasAKilogramo();
                break;

            case 0:
                repetir = false;
                break;
        }
    } while (repetir);
}

void convertirCelsiusFahrenheit(){
double celsius;
cout << "\tIngrese grados celsius a convertir: ";
cin >> celsius;
// Grados Fahrenheit = (grados centígrados × 9/5) +32.
cout<< "\t" <<celsius<<" celsius = "<<((celsius*9.0/5.0)+32)<< " Fahrenheit" << endl;
};
void convertirLibrasAKilogramo(){
    double libras;
    cout << "\tIngrese la unidades en Libras: ";
    cin >> libras;
    cout <<"\t"<< libras << " libras = " << (libras / 2.205) << " Kilogramos. ";
}
void convertirCentimetrosAPugadas(){
    // 2,54
    double centimetros;
    cout << "\tIngrese medida en centimetros: ";
    cin >> centimetros;
    cout << "\t" << centimetros << " centimetros = " << (centimetros / 2.54) << " pulgadas. ";
    
}