#include <iostream>
#include "order.hpp"
using namespace std;

Order::Order(string _code, Client* _client)
    : code(_code), client(_client), numArticles(0)
{
    // Inicializamos todos los punteros a nullptr
    for (int i = 0; i < 20; i++) {
        articles[i] = nullptr;
    }
}

string Order::getCode()
{
    return this->code;
}

void Order::addArticle(Article* _article)
{
    if (numArticles < 20) {
        articles[numArticles++] = _article;
    } else {
        cout << "Error: No se pueden agregar más artículos. El pedido está lleno." << endl;
    }
}

void Order::showOrder()
{
    cout << "Pedido Nro: " << getCode() << endl;
    cout << "Cliente: " << client->getName() << " " << client->getSurname() << endl;
    cout << "Direccion: " << client->getAddress() << endl;
    cout << "Articulos: " << endl;

    for(int i = 0; i < numArticles; i++)
    {
        cout << "  - " << articles[i]->getName() << " (" << articles[i]->getCode() << "): $" << articles[i]->getPrice() << endl;
    }

    cout << "-------------------------------------" << endl;
    cout << endl;
}