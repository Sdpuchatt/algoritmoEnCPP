// b. Un empresa de viaje nos pide que realicemos un programa para tomar
// reservas en avión, las mismas pueden ser clase Primera, Bussiness y
// económica, además del dni apellido y nombre, aeropuerto origen y destino:
// Código Aeropuerto
// 1. Bahía Blanca-BHI
// 2. Buenos Aires Aeroparque-AEP
// 3. Buenos Aires El Palomar-EPA
// 4. Buenos Aires Ezeiza-EZE
// 5. San Carlos de Bariloche-BRC
// 6. San Fernando del Valle de Catamarca-CTC
// 7. Comodoro Rivadavia-CRD
// El usuario introduce los datos personales, la clase y el origen – destino,
// mostrando el resultado x pantalla.
#include <iostream>
using namespace std;
typedef enum {primeraClase, bussiness , economica} claseVuelo;
typedef enum {
Bahia_Blanca_BHI,
Buenos_Aires_Aeroparque_AEP,
BuenosAires_El_Palomar_EPA,
Buenos_Aires_Ezeiza_EZE,
San_Carlos_de_Bariloche_BRC,
San_Fernando_del_Valle_de_Catamarca_CTC} aeropuertos;

int muestraAeropuertos();
string imprimeAeropuerto(int opcion);
string imprimeClaseVuelo(int opcion);
int muestraClaseVuelo();
void reservaOk(string nombre, string apellido, string dni, int origen, int destino, int clase);
int main()
{
string dni, nombre, apellido;
int origen,destino, clase;
cout << "Ingrese los siguientes datos para la reserva del vuelo. \n";
cout << "Nombre: ";
cin >> nombre;
cout << "Apellido: ";
cin >> apellido;
cout << "Dni: ";
cin >> dni;
cout << "Elija el origen del viaje: \n";
origen = muestraAeropuertos(); 
cout << "Elija destino del viaje: \n";
destino = muestraAeropuertos();
cout << "¿En que clase quiere viajar ?";
clase = muestraClaseVuelo();

reservaOk(nombre, apellido, dni, origen, destino, clase);
return 0;

}
void reservaOk(string nombre, string apellido, string dni, int origen, int destino, int clase){
    cout << "****************************************************************" << endl;
    cout << "***** Reserva completa. *****" << endl;
    cout << "\t a nombre de "<< nombre << " "<< apellido << " " << dni << endl;
    cout << "\t Viaja desde "<< imprimeAeropuerto(origen) << endl; 
    cout << "\t hasta su destino "<< imprimeAeropuerto(destino) << endl;
    cout << "\t En clase " << imprimeClaseVuelo(clase) << endl; 
    cout << "****************************************************************" << endl;
}
int muestraAeropuertos(){
    int opcion;
    cout << "1. " <<  imprimeAeropuerto(0) << endl;
    cout << "2. " <<  imprimeAeropuerto(1) << endl;
    cout << "3. " <<  imprimeAeropuerto(2) << endl;
    cout << "4. " <<  imprimeAeropuerto(3) << endl;
    cout << "5. " <<  imprimeAeropuerto(4) << endl;
    cout << "6. " <<  imprimeAeropuerto(5) << "  ";;
    cin >> opcion;
    return opcion-1; 
}
string imprimeAeropuerto(int opcion){
    string cadena;
    switch (opcion){
        case Bahia_Blanca_BHI : 
            cadena = "Bahia_Blanca_BHI";
            break;
        case Buenos_Aires_Aeroparque_AEP:
            cadena = "Buenos_Aires_Aeroparque_AEP";
            break;
        case BuenosAires_El_Palomar_EPA:
            cadena = "BuenosAires_El_Palomar_EPA";
            break;
        case Buenos_Aires_Ezeiza_EZE:
            cadena = "Buenos_Aires_Ezeiza_EZE";
            break;
        case San_Carlos_de_Bariloche_BRC:
            cadena = "San_Carlos_de_Bariloche_BRC";
            break;
        case San_Fernando_del_Valle_de_Catamarca_CTC:
            cadena = "San_Fernando_del_Valle_de_Catamarca_CTC";
            break;
    }
    return cadena;
}
string imprimeClaseVuelo(int opcion){
    string cadena;
    switch(opcion) {
        case primeraClase:
            cadena = "Primera Clase";
            break;
        case bussiness:
            cadena = "Bussiness";
            break; 
        case economica: 
            cadena = "economica";
            break;
    }
    return cadena;
}
int muestraClaseVuelo(){
    cout << "Elija una clase de vuelo. \n";
    cout << "Dese viajar en: \n";
    cout << "1. " << imprimeClaseVuelo(0) <<endl;
    cout << "2. " << imprimeClaseVuelo(1) <<endl;
    cout << "3. " << imprimeClaseVuelo(2) << "  ";
    int opcion;
    cin >> opcion;
    return opcion -1;
}
