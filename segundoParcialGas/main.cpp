// Una Empresa que vende “GAS en Garrafas de distintos Tamaños y demás accesorios” nos convoca
// para la realización de una App que permita registrar los Pedidos de Equipos de los clientes.

#include <iostream>
#include <string>
#include "./include/Articulo.hpp"
#include "./include/Orden.hpp"
#include "./include/Cliente.hpp"
#include "./include/Empleado.hpp"

using namespace std;

int main()
{
    cout << "GAS en Garrafas" << endl;

    Articulo *articulo = new Articulo("001A","Garrafa Pequeña", 15000.00);
    Articulo *articulo2 = new Articulo("002A","Garrafa Mediana", 20000.00);
    Articulo *articulo3 = new Articulo("003A","Garrafa Grande", 25000.00);

    Empleado *empleado = new Empleado("001V","Sergio", "Av Siempre viva 123", "Vendedor");
    Empleado *empleado2 = new Empleado("002V","Lautaro", "Berutti 7100", "Vendedor");

    Cliente *cliente = new Cliente("001C","Juan Perez", "Belgica 7119");
    Cliente *cliente2 = new Cliente("002C","Maria Garcia", "Calle falsa 456");


    Orden *orden = new Orden("001",cliente,empleado);
    orden->agregarArticulo(articulo);
    orden->agregarArticulo(articulo2);
    orden->agregarArticulo(articulo3);

    Orden *orden2 = new Orden("002",cliente2,empleado2);
    orden2->agregarArticulo(articulo);
    orden2->agregarArticulo(articulo2);
    orden2->agregarArticulo(articulo3);


    orden->mostrar();
    orden2->mostrar();

    return 0;
}