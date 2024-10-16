#include "pedido.h"
#include <iostream>

using namespace std;

Pedido::Pedido(Cliente* cliente) : cliente(cliente) {}

void Pedido::agregarArticulo(Articulo* articulo) {
    articulos.push_back(articulo);
}

void Pedido::mostrarPedido() {
    cout << "Cliente: " << cliente->nombre << endl;
    cout << "Direccion: " << cliente->direccion << endl;
    cout << "Articulos:" << endl;
    for (Articulo* articulo : articulos) {
        cout << "- " << articulo->nombre << " - $" << articulo->precio << endl;
    }
    cout << endl;
}
