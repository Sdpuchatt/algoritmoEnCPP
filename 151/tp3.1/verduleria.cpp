// c. Un Verdulería nos pide que armemos el pedido para el mayorista para lo cual
// deberemos pedir al usuario el código proveedor, razón social, fecha de
// solicitud y fecha de entrega. Las frutas estarán enumeradas (tomar solo 6 a
// modo de ejemplo), mostrando los datos x pantalla.
#include <iostream>
using namespace std;
typedef enum {manzana,wiki,palta,tomate,pera,mandarina} frutas;

string imprimirFruta(int fruta);
void pedidoDeFruta(string proveedor,string razon_social, string fecha_pedido, string fecha_entrega,int fruta);
int mostrarListaFruta();

int main()
{
string proveedor, razon_social, fecha_pedido, fecha_entrega;
int frutita;
cout << "Empecemos con el pedido: " << endl;
cout << "Ingrese el codigo del proveedor: ";
getline(cin, proveedor);
cout << "Ingrese la razon social: ";
getline(cin, razon_social);
cout << "Ingrese la fecha de hoy ";
getline(cin,fecha_pedido);
cout << "Ingrese la fecha de entrega: ";
getline(cin,fecha_entrega);
frutita = mostrarListaFruta();

pedidoDeFruta(proveedor,razon_social,fecha_pedido,fecha_entrega,frutita);

return 0;

}
void pedidoDeFruta(string proveedor,string razon_social, string fecha_pedido, string fecha_entrega,int fruta){
    cout << "Su pedido de fruta" << endl;
    cout << proveedor << " "<< razon_social<< " "<< fecha_pedido<< " "<< endl;
    cout <<fecha_entrega<< " "<< imprimirFruta(fruta)<< endl;
    
}
int mostrarListaFruta(){
    int opcion;
    cout << "1. " <<imprimirFruta(0) << endl;
    cout << "2. " <<imprimirFruta(1) << endl;
    cout << "3. " <<imprimirFruta(2) << endl;
    cout << "4. " <<imprimirFruta(3) << endl;
    cout << "5. " <<imprimirFruta(4) << endl;
    cout << "6. " <<imprimirFruta(5) << " ";
    cin >> opcion;
    return (opcion-1);
}
string imprimirFruta(int fruta){
    string cadena;
    switch(fruta){
        case manzana:
            cadena = "manzana"; 
            break;
        case wiki:
            cadena = "wiki";
            break;
        case palta:
            cadena = "palta";
            break;
        case tomate:
            cadena = "tomate";
        case pera:
            cadena = "pera";
            break;
        case mandarina:
            cadena = "mandarina";
            break;
    }
    return cadena;
}