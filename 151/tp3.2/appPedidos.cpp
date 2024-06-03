// c. Un empres nos pide el armado de una App para la toma de pedidos, primero
// deberá presentar un menú de Opciones de 4 productos a) Simple b)medio
// c)calidad d)Premiun ,luego nos deberá mostrar en menú de tipo de envio: 1)
// normal 2) express 3) Fast Delivery.
// A posteriori deberá mostrar x consola el producto seleccionado y el tipo de
// envío que eligió.
// PD. Usar Funciones, manteniendo un Main lo “mas pequeño posible”,
// desacoplando las funcionalidades. Trabajar con la visibilidad de los operadores
// vistos, while Swtch If ….
#include <iostream>
using namespace std;

typedef enum {Simple, Medio, Calidad, Premium} producto;
typedef enum {Normal, Express, Fast_Delivery} pedido;

producto mostrarProducto ();
pedido mostrarPedido ();
string productoToString(producto producto);
string pedidoToString(pedido pedido);
int main()
{

producto producto = mostrarProducto();
cout << "\n";
pedido pedido = mostrarPedido();
cout << "\n";
cout << "\n****************************\n";
cout << "\tUsted pidio: " << endl;
cout << "\t" << productoToString(producto) << endl;
cout << "\t" << pedidoToString(pedido) << endl;
cout << "****************************\n";

return 0;
}
producto mostrarProducto () {
    cout << "\n\tElija una opcion. \n";
    cout << "\t1. Simple\n";
    cout << "\t2. medio\n";
    cout << "\t3. calidad\n";
    cout << "\t4. Premiun ";
    int opcion;
    cin >> opcion;

    switch(opcion){
        case 1:
            return Simple;
        case 2:
            return Medio;
        case 3:
            return Calidad;
        case 4:
            return Premium;
    }
    
}
pedido mostrarPedido (){
    cout << "\tElija una opcion. \n";
    cout << "\t1. normal\n";
    cout << "\t2. express\n";
    cout << "\t3. Fast Delivery ";
    int opcion;
    cin >> opcion;
    switch(opcion){
        case 1:
            return Normal;
        case 2:
            return Express;
        case 3:
            return Fast_Delivery;
    }
}
string productoToString(producto producto){
    string cadena;
    switch(producto){
        case Simple: 
            cadena = "Simple";
        case Medio:
            cadena = "Medio";
        case Calidad:
            cadena = "Calidad";
        case Premium:
            cadena = "Premium";
    }
    return cadena;
}
string pedidoToString(pedido pedido){
    string cadena;
    switch(pedido){
        case Normal:
            cadena = "Normal";
        case Express:
            cadena = "Express";
        case Fast_Delivery:
            cadena = "Fast_Delivery";
    }
    return cadena;
}