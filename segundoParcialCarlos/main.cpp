#include <iostream>
#include "article.hpp"         // las rutas de directorio estaran indicadas en el archivo build.sh al momento de generar el ejecutable
#include "client.hpp"
#include "order.hpp"

using namespace std;

int main()
{   
    // T_odo harcodeado sin menu  
    // Creamos algunos artículos  Son objetos de la clase Article
    Article* article1 = new Article("A001", "Colonia Zorrino", 4999.99);
    Article* article2 = new Article("A002", "Talco Patalin", 500.00);
    Article* article3 = new Article("A003", "Jabon Cito", 150.50);

    // Creamos algunos clientes  Son objetos de la clase Client
    Client* client1 = new Client("C001", "Veronica", "Peppa", "Limonero 1234");
    Client* client2 = new Client("C002", "Fabian", "Polleras", "El Gobernado 900");

    // Creamos algunos pedidos  Son objetos de la clase Order
    Order* orderClient1 = new Order("P001", client1);
    Order* orderClient2 = new Order("P002", client2);

    // Agregamos artículos a los pedidos  Usamos el metodo addArticle de la clase Order
    orderClient1->addArticle(article1);
    orderClient1->addArticle(article2);

    orderClient2->addArticle(article2);
    orderClient2->addArticle(article3);

// Creamos un arreglo de punteros a objetos Order    creamos un arreglo de punteros a objetos Order
    Order* orderList[] = {orderClient1, orderClient2};

    // Calculamos el tamaño del arreglo    // esto se puede evitar ya que al harcordear todo sabemos cuantos clientes y pedidos tenemos
    int orderListSize = sizeof(orderList) / sizeof(orderList[0]);
/* 
sizeof(orderList) da el tamaño total en bytes del arreglo.
sizeof(orderList[0]) da el tamaño en bytes de un elemento del arreglo.
Dividiendo estos, obtenemos el número de elementos en el arreglo.
*/


    // Mostramos la lista de pedidos
    cout << endl;
    cout << "************************************************" << endl;
    cout << "LISTA DE PEDIDOS - PERFUMERIA  EL SOBACO OLOROSO" << endl;
    cout << "************************************************" << endl;
    cout << endl;

    for (int i = 0; i < orderListSize; i++)
    {
        orderList[i]->showOrder();
    }
    
    // Liberamos la memoria
    delete article1;
    delete article2;
    delete article3;
    delete client1;
    delete client2;
    delete orderClient1;
    delete orderClient2;

    return 0;
}