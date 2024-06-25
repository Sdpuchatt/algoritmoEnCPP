#include <iostream>
#include <string>
using namespace std;

const int longitudArray = 50;  // Longitud máxima del array de clientes

typedef struct {
    int codigo;
    string nombre;
    string apellido;
} tCliente;

typedef struct {
    int contador = 0;
    tCliente cliente[longitudArray];
} tEmpresa;

void altaCliente(tEmpresa &nicTech);
void bajaCliente(tEmpresa &nicTech);
void modificarCliente(tEmpresa &nicTech);
void mostrarListaClientes(const tEmpresa &nicTech);
void buscarCliente(const tEmpresa &nicTech);

int main() {
    tEmpresa nicTech;

    // Ejemplo de clientes predefinidos para pruebas
    nicTech.cliente[nicTech.contador].codigo = 100;
    nicTech.cliente[nicTech.contador].nombre = "Sergio";
    nicTech.cliente[nicTech.contador].apellido = "Puchatt";
    nicTech.contador++;

    nicTech.cliente[nicTech.contador].codigo = 200;
    nicTech.cliente[nicTech.contador].nombre = "Daniel";
    nicTech.cliente[nicTech.contador].apellido = "Puchatt";
    nicTech.contador++;

    int opcion;
    bool salir = false;

    do {
        cout << "\n\t********** Menu ********** \n"
             << "\t1. Dar de alta un Cliente\n"
             << "\t2. Dar de baja un Cliente por código\n"
             << "\t3. Modificar un Cliente por código\n"
             << "\t4. Mostrar Lista de Clientes\n"
             << "\t5. Buscar Cliente por código\n"
             << "\t0. Salir\n"
             << "\n\tIngrese su opción: ";
        cin >> opcion;

        switch (opcion) {
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
                salir = true;
                break;
            default:
                cout << "Opción no válida. Por favor, ingrese una opción válida.\n";
                break;
        }
    } while (!salir);

    return 0;
}

void altaCliente(tEmpresa &nicTech) {
    if (nicTech.contador < longitudArray) {
        nicTech.cliente[nicTech.contador].codigo = 100 + nicTech.contador;
        cout << "Ingrese el nombre del cliente: ";
        cin >> nicTech.cliente[nicTech.contador].nombre;
        cout << "Ingrese el apellido del cliente: ";
        cin >> nicTech.cliente[nicTech.contador].apellido;
        nicTech.contador++;
        cout << "Cliente dado de alta exitosamente.\n";
    } else {
        cout << "No se pueden agregar más clientes. Capacidad máxima alcanzada.\n";
    }
}

void bajaCliente(tEmpresa &nicTech) {
    int codigo;
    bool encontrado = false;

    cout << "Ingrese el código del cliente a dar de baja: ";
    cin >> codigo;

    for (int i = 0; i < nicTech.contador; ++i) {
        if (nicTech.cliente[i].codigo == codigo) {
            encontrado = true;
            // Eliminar el cliente moviendo los elementos restantes una posición hacia atrás
            for (int j = i; j < nicTech.contador - 1; ++j) {
                nicTech.cliente[j] = nicTech.cliente[j + 1];
            }
            nicTech.contador--;
            cout << "Cliente con código " << codigo << " dado de baja exitosamente.\n";
            break;
        }
    }

    if (!encontrado) {
        cout << "Cliente con código " << codigo << " no encontrado.\n";
    }
}

void modificarCliente(tEmpresa &nicTech) {
    int codigo;
    bool encontrado = false;

    cout << "Ingrese el código del cliente a modificar: ";
    cin >> codigo;

    for (int i = 0; i < nicTech.contador; ++i) {
        if (nicTech.cliente[i].codigo == codigo) {
            encontrado = true;
            cout << "Datos actuales del cliente:\n";
            cout << "Código: " << nicTech.cliente[i].codigo << endl;
            cout << "Nombre: " << nicTech.cliente[i].nombre << endl;
            cout << "Apellido: " << nicTech.cliente[i].apellido << endl;
            cout << "\nIngrese el nuevo nombre del cliente: ";
            cin >> nicTech.cliente[i].nombre;
            cout << "Ingrese el nuevo apellido del cliente: ";
            cin >> nicTech.cliente[i].apellido;
            cout << "Cliente modificado exitosamente.\n";
            break;
        }
    }

    if (!encontrado) {
        cout << "Cliente con código " << codigo << " no encontrado.\n";
    }
}

void mostrarListaClientes(const tEmpresa &nicTech) {
    if (nicTech.contador == 0) {
        cout << "No hay clientes registrados.\n";
    } else {
        cout << "Lista de clientes:\n";
        for (int i = 0; i < nicTech.contador; ++i) {
            cout << "Cliente " << i + 1 << ":" << endl;
            cout << "Código: " << nicTech.cliente[i].codigo << endl;
            cout << "Nombre: " << nicTech.cliente[i].nombre << endl;
            cout << "Apellido: " << nicTech.cliente[i].apellido << endl;
            cout << "-----------------------------\n";
        }
    }
}

void buscarCliente(const tEmpresa &nicTech) {
    int codigo;
    bool encontrado = false;

    cout << "Ingrese el código del cliente a buscar: ";
    cin >> codigo;

    for (int i = 0; i < nicTech.contador; ++i) {
        if (nicTech.cliente[i].codigo == codigo) {
            encontrado = true;
            cout << "Cliente encontrado:\n";
            cout << "Código: " << nicTech.cliente[i].codigo << endl;
            cout << "Nombre: " << nicTech.cliente[i].nombre << endl;
            cout << "Apellido: " << nicTech.cliente[i].apellido << endl;
            break;
        }
    }

    if (!encontrado) {
        cout << "Cliente con código " << codigo << " no encontrado.\n";
    }
}
