#ifndef PEDIDO_H
#define PEDIDO_H

#include "cliente.h"
#include "articulo.h"
#include <iostream>
using namespace std;

class Pedido {
private:
    Cliente cliente;
    Articulo articulos[10];  // Array de tamaño fijo
    int cantidadArticulos;    // Para llevar el control de la cantidad de artículos agregados
public:
    Pedido() : cliente(), cantidadArticulos(0) {}
    Pedido(Cliente cliente) : cliente(cliente), cantidadArticulos(0) {}

    void agregarArticulo(const Articulo& articulo) {
        if (cantidadArticulos < 10) {  // Asegurarse de no exceder el tamaño del array
            articulos[cantidadArticulos] = articulo;
            cantidadArticulos++;
        } else {
            cout << "No se pueden agregar más artículos. Pedido completo.\n";
        }
    }

    void mostrarPedido() const {
        cliente.mostrarCliente();
        cout << "Artículos comprados:\n";
        for (int i = 0; i < cantidadArticulos; i++) {
            articulos[i].mostrarArticulo();
        }
    }
};

#endif
