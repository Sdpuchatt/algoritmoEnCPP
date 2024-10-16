#include <iostream>
#include "articulo.h"
#include "cliente.h"
#include "pedido.h"

using namespace std;

// Funciones para cargar los datos
void cargarArticulos(Articulo articulos[], int& cantidad) {
    articulos[0] = Articulo(1, "Crema Facial", 25.5);
    articulos[1] = Articulo(2, "Perfume", 40.0);
    articulos[2] = Articulo(3, "Jabón Líquido", 12.75);
    cantidad = 3;  // Actualizamos la cantidad de artículos
}

void cargarClientes(Cliente clientes[], int& cantidad) {
    clientes[0] = Cliente(1, "Juan Perez");
    clientes[1] = Cliente(2, "Ana Gómez");
    cantidad = 2;  // Actualizamos la cantidad de clientes
}

void mostrarPedidos(Pedido pedidos[], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        pedidos[i].mostrarPedido();
        cout << "--------------------------------------" << endl;
    }
}

int main() {
    Articulo articulos[10];  // Array de artículos (máximo 10 artículos)
    Cliente clientes[10];    // Array de clientes (máximo 10 clientes)
    Pedido pedidos[10];      // Array de pedidos (máximo 10 pedidos)

    int cantidadArticulos = 0;
    int cantidadClientes = 0;
    int cantidadPedidos = 0;

    // Cargar artículos y clientes
    cargarArticulos(articulos, cantidadArticulos);
    cargarClientes(clientes, cantidadClientes);

    // Crear pedidos y asignar artículos a los clientes
    Pedido pedido1(clientes[0]);
    pedido1.agregarArticulo(articulos[0]);
    pedido1.agregarArticulo(articulos[1]);

    Pedido pedido2(clientes[1]);
    pedido2.agregarArticulo(articulos[2]);

    // Agregar pedidos al array de pedidos
    pedidos[0] = pedido1;
    pedidos[1] = pedido2;
    cantidadPedidos = 2;

    // Mostrar los pedidos de los clientes
    mostrarPedidos(pedidos, cantidadPedidos);

    return 0;
}
