#ifndef PEDIDO_H
#define PEDIDO_H

#include <vector>
#include "cliente.h"
#include "articulo.h"

class Pedido {
public:
    Cliente* cliente;
    std::vector<Articulo*> articulos;
    
    Pedido(Cliente* cliente);
    void agregarArticulo(Articulo* articulo);
    void mostrarPedido();
};

#endif
