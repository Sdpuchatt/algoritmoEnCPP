#include <iostream>
#include "articulo.h"
#include "cliente.h"
#include "pedido.h"

using namespace std;

int main() {
    // Cargar Artículos
    Articulo a1("Labial", 15.99);
    Articulo a2("Perfume", 55.50);
    Articulo a3("Crema", 25.75);
    
    // Cargar Clientes
    Cliente c1("Juan Perez", "Av. Siempre Viva 123");
    Cliente c2("Maria Garcia", "Calle Falsa 456");
    
    // Cargar Pedidos
    Pedido p1(&c1);
    p1.agregarArticulo(&a1);
    p1.agregarArticulo(&a2);
    
    Pedido p2(&c2);
    p2.agregarArticulo(&a3);
    
    // Mostrar los pedidos
    p1.mostrarPedido();
    p2.mostrarPedido();
    
    return 0;
}

// g++ articulo.cpp cliente.cpp pedido.cpp main.cpp -o mi_programa
