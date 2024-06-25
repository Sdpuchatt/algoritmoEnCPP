#include <iostream>
using namespace std;

int const longitudArray = 50;

typedef struct {
    int codigo;
    string nombre;
    string apellido;
} tCliente;

typedef struct {
    int contador = 0;
    tCliente cliente[longitudArray];
} tEmpresa;

void altaCliente(tEmpresa nicTech);
void bajaCliente(tEmpresa nicTech);
void modificarCliente(tEmpresa nicTech);
void mostrarListaClientes(tEmpresa nicTech);
void buscarCliente(tEmpresa nicTech);

int main()
{



tEmpresa nicTech;

nicTech.cliente[0] ={100,"Sergio","Puchatt"} ;
nicTech.contador++;
nicTech.cliente[1].codigo = 200;
nicTech.cliente[1].nombre = "Daniel";
nicTech.cliente[1].apellido = "Puchatt";
nicTech.contador++;


cout << "CODIGO: " << nicTech.cliente[0].codigo << endl;
cout << nicTech.cliente[1].apellido <<nicTech.cliente[1].nombre <<nicTech.cliente[1].codigo << endl;
cout << "\n\t********** Menu ********** \n" << "\t1. Dar de alta un CLiente: \n\t2. Dar de baja Cliente x codigo de cliente. \n" <<
"\t3. Modificar cliente por codigo. \n\t4. Mostrar Lista de Clientes. \n\t5. Buscar cliente por codigo. \n" <<
"\n\t0. Salir. \n" << endl;
int opcion = 0;
bool cortarOpcion = false;
cin >> opcion;
do{
    switch (opcion)
    {
    case 1:
        altaCliente(nicTech);
        break;
    case 2:
        bajaCliente(nicTech);
        break;
    case 3:
        modificarCliente(nicTech);
        break;
    case 4:
        mostrarListaClientes(nicTech);
        break;
    case 5:
        buscarCliente(nicTech);
        break;
    case 0:
        cortarOpcion = true;
        break;     
    default:
        cout << "Ingrese una opcion correcta" << endl;
        break;
    }

}while(!cortarOpcion && opcion != 0);


return 0;

}
void altaCliente(tEmpresa nicTech){
    nicTech.cliente[nicTech.contador].codigo = nicTech.contador + 100;
    cout << "Ingrese El nombre del cliente: "<< endl;
    cin >> nicTech.cliente[nicTech.contador].nombre;
    cout << "Ingrese El apellido del cliente: "<< endl;
    cin >> nicTech.cliente[nicTech.contador].apellido;
};
void bajaCliente(tEmpresa nicTech){

};
void modificarCliente(tEmpresa nicTech){

};
void mostrarListaClientes(tEmpresa nicTech){

};
void buscarCliente(tEmpresa nicTech){

};