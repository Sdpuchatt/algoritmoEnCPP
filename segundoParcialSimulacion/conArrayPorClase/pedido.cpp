#include <iostream>
#include "articulo.cpp"
#include "cliente.cpp"
using namespace std;

class Pedido {
private:
    Cliente cliente;
    Articulo articulos[10];  // Array de tamaño fijo
    int cantidadArticulos;    // Para llevar el control de la cantidad de artículos agregados
public:
    Pedido() {
        cantidadArticulos = 0;
    }

    Pedido(Cliente _cliente) {
        cliente = _cliente;
        cantidadArticulos = 0;
    }

    void agregarArticulo(const Articulo& articulo) {
        if (cantidadArticulos < 10) {
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
