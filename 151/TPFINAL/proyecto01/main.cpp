// main.cpp
#include <iostream>
#include <fstream>
#include "include/Pollo.hpp"
#include "include/Cerdo.hpp"
#include "include/Vacuno.hpp"
#include "include/DetalleArticulo.hpp"
#include "include/Orden.hpp"
#include "include/Cliente.hpp"

void guardarOrden(const Orden& orden) {
    ofstream archivo("ordenes.txt", ios::app);
    if (archivo.is_open()) {
        archivo << "Orden de " << orden.obtenerCliente().obtenerNombre() << endl;
        archivo.close();
    }
}

int main() {
    int opcion;
    do {
        cout << "Menu de Opciones:\n";
        cout << "1. Crear Orden\n";
        cout << "2. Salir\n";
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                Cliente cliente("001", "Juan Perez", "Calle Falsa 123");
                Pollo pollo("P001", "Pollo Entero", 50.0);
                DetalleArticulo detalle(&pollo, 2);
                Orden orden("ORD001", detalle, cliente);
                
                guardarOrden(orden);
                cout << "Orden guardada.\n";
                break;
            }
            case 2:
                cout << "Saliendo del programa.\n";
                break;
            default:
                cout << "Opcion no valida.\n";
        }
    } while (opcion != 2);

    return 0;
}
