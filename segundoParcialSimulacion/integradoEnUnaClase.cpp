#include <iostream>
#include <string>
#include <vector>

// Clase Articulo
class Articulo {
public:
    std::string nombre;
    double precio;
    
    Articulo(std::string nombre, double precio) : nombre(nombre), precio(precio) {}
};

// Clase Cliente
class Cliente {
public:
    std::string nombre;
    std::string direccion;
    
    Cliente(std::string nombre, std::string direccion) : nombre(nombre), direccion(direccion) {}
};

// Clase Pedido
class Pedido {
public:
    Cliente* cliente;
    std::vector<Articulo*> articulos;
    
    Pedido(Cliente* cliente) : cliente(cliente) {}
    
    void agregarArticulo(Articulo* articulo) {
        articulos.push_back(articulo);
    }
    
    void mostrarPedido() {
        std::cout << "Cliente: " << cliente->nombre << std::endl;
        std::cout << "Direccion: " << cliente->direccion << std::endl;
        std::cout << "Articulos:" << std::endl;
        for (Articulo* articulo : articulos) {
            std::cout << "- " << articulo->nombre << " - $" << articulo->precio << std::endl;
        }
        std::cout << std::endl;
    }
};

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
