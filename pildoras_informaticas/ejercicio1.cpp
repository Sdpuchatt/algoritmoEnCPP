
#include <iostream>
using namespace std;
// ¿Cuantos metros quieres instalar con calidad media?
// ¿Cuantos metros quieres instalar con calidad alta?
// Precio m calidad media = 35.5
// Precio m calidad alta = 55.3
//IVA 21%
// Dias validez del presupuesto 30 dias
int main()
{
    int cantidadMedia = 0;
    int cantidadAlta = 0;
    cout<<"Cuantos metros quieres instalar con calidad media?"<< endl;
    cin >> cantidadMedia;
    cout<<"Cuantos metros quieres instalar con calidad alta?"<< endl;
    cin >> cantidadAlta;
    if(cantidadMedia>0){
        cout << "\tPrecio por metro Calidad = 35.5"<< endl;
        cout << "\t\tLa suma del presupuesto es: \n\t\tCantidad de metros de calidad media "<< cantidadMedia<< " => "<< (cantidadMedia*35.5)<< endl;
        cout << "\t\tIVA "<< 0.21*(cantidadMedia*35.5)<< endl;
        cout << "\t\tLa suma de presupuesto es: "<< (cantidadMedia*35.5 + 0.21*(cantidadMedia*35.5))<< endl;

    }
    if(cantidadAlta>0){
        cout << "\n\tPrecio por metro Calidad = 55.3"<< endl;
        cout << "\t\tLa suma del presupuesto es: \n\t\tEntre los de metros de costa alta "<< cantidadAlta<< " => "<< (cantidadAlta*55.3)<< endl;
        cout << "\t\tIVA "<< 0.21*(cantidadAlta*55.3)<< endl;
        cout << "\t\tLa suma de presupuesto es: "<< (cantidadAlta*55.3 + 0.21*(cantidadAlta*55.3))<< endl;
    }
    if(cantidadAlta>0 && cantidadMedia>0){
        cout << "\n\n\tLa suma de presupuesto es: "<< (cantidadMedia*35.5 + cantidadAlta*55.3 + 0.21*(cantidadMedia*35.5 + cantidadAlta*55.3))<< endl;
    }

return 0;

}