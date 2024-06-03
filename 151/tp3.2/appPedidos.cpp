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
int main()
{

return 0;

}
char mostrarProducto () {
    cout << "Elija una opcion. \n";
    cout << "1) Simple\n";
    cout << "2) medio\n";
    cout << "3) calidad\n";
    cout << "4) Premiun ";
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
int mostrarPedido (){
    cout << "Elija una opcion. \n";
    cout << "1) normal\n";
    cout << "2) express\n";
    cout << "3) Fast Delivery";
    cout << "d) Premiun ";
    int opcion;
    cin >> opcion;
    return opcion;
}
string productoToString(int producto){
    switch(producto){
        case 
    }
}