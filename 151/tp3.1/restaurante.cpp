// 1. Resolver y Realizar en c++
// a. Una aplicación para un restaurante que tiene: primer plato, plato principal y
// poste, toma pedidos de los mozos. Estos envían la comanda codificada por
// numero para cada plato. El cocinero recibe el pedido en formato de texto con
// el nro de mesa, nombre mozo, fecha, hora, primer plato, plato principal y
// poste. Se pide desarrollar una APP que pida la comanda y muestre por
// pantalla la Info solicitada.
#include <iostream>
#include <ctime>
using namespace std;
int menuPlatoEntrada();
int menuPlatoPrincipal();
int menuPostre();
string imprimePlatoEntrada(int entrada);
string imprimePlatoPrincipal(int plato);
string imprimePostre(int postre);
void paraCocinero(int numMesa,string nombreMozo,string fecha,string hora,int entrada,int plato,int postre);
typedef enum {arrollado, rusa, canape, jamonCrudo} platoEntrada;
typedef enum {milanesa, hamburguesa, empanada, pizza, asado} platoPrincipal;
typedef enum {batata,membrillo, helado, flan} postre;

int main()
{
string mozo = "", fecha, hora;
int numeroMesa = 0;
int entrada,plato,postre;
cout << "Ingrese el pedido:" << endl;
cout << "Nombre del mozo: ";
cin >> mozo;
cout << "Numero de mesa: ";
cin >> numeroMesa;
cout << "Ingrese la fecha: ";
cin >> fecha;
cout << "Ingrese la hora: ";
cin >> hora;
entrada = menuPlatoEntrada();
plato = menuPlatoPrincipal();
postre = menuPostre();

paraCocinero(numeroMesa,mozo,fecha,hora,entrada,plato,postre);

return 0;

}
// El cocinero recibe el pedido en formato de texto con
// el nro de mesa, nombre mozo, fecha, hora, primer plato, plato principal y
// poste. Se pide desarrollar una APP que pida la comanda y muestre por
// pantalla la Info solicitada.
void paraCocinero(int numMesa,string nombreMozo,string fecha,string hora,int entrada,int plato,int postre){
    cout << "Pedido para la mesa " << numMesa << " lo pidio el mozo " << nombreMozo <<"."<< endl;
    cout << "El pedido es: ";
    cout << imprimePlatoEntrada(entrada) <<" , "<< imprimePlatoPrincipal(plato)<<" , "<<imprimePostre(postre)<<"."<< endl;
}
int menuPlatoEntrada(){
    int opcion;
    cout<< "Elija una entrada: \n" << endl;
    cout << "1 para Arrollado \n";
    cout << "2 para rusa \n";
    cout << "3 para canape \n";
    cout << "4 para jamonCrudo \n";
    cout << "Opcion: ";
    cin >> (opcion);
    return (opcion-1);
};
int menuPlatoPrincipal(){
    int opcion;
    cout<< "Elija una entrada: " << endl;
    cout << "1 para milanesa \n";
    cout << "2 para hamburguesa \n";
    cout << "3 para empanada \n";
    cout << "4 para pizza \n";
    cout << "5 para asado \n";
    cout << "Opcion: ";
    cin >> (opcion);
    return (opcion-1);
};
int menuPostre(){
    int opcion;
    cout<< "Elija una entrada: " << endl;
    cout << "1 para batata \n";
    cout << "2 para membrillo \n";
    cout << "3 para helado \n";
    cout << "4 para flan \n";
    cout << "Opcion: ";
    cin >> (opcion);
    return (opcion-1);
};

string imprimePlatoEntrada(int entrada){
    string cadena;
        switch (entrada) {
        case arrollado:
            cadena = "Arrolado";
            break;
        case rusa:
            cadena = "rusa";
            break;
        case canape:
            cadena = "canape";
            break;
        case jamonCrudo:
            cadena = "jamonCrudo";
            break;
        default:
            cout << "Opcion no valida." << endl;
            break;
    }
    return cadena;
}
string imprimePlatoPrincipal(int plato){
    string cadena; 
            switch (plato) {
        case milanesa:
            cadena = "milanesa";
            break;
        case hamburguesa:
            cadena = "hamburguesa";
            break;
        case empanada:
            cadena = "empanada";
            break;
        case pizza:
            cadena = "pizza";
            break;
        case asado:
            cadena = "asado";
            break;
        default:
            cout << "Opcion no valida." << endl;
            break;
    }
    return cadena;
}
string imprimePostre(int postre){
        string cadena; 
            switch (postre) {
        case batata:
            cadena = "batata";
            break;
        case membrillo:
            cadena = "membrillo";
            break;
        case helado:
            cadena = "helado";
            break;
        case flan:
            cadena = "flan";
            break;
        default:
            cout << "Opcion no valida." << endl;
            break;
    }
    return cadena;
}
