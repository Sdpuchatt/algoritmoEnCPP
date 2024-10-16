#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <iostream>
using namespace std;

class Cliente {
private:
    int id;
    string nombre;
public:
    Cliente() : id(0), nombre("") {}
    Cliente(int id, string nombre) : id(id), nombre(nombre) {}

    int getId() const { return id; }
    string getNombre() const { return nombre; }

    void mostrarCliente() const {
        cout << "ID Cliente: " << id << ", Nombre: " << nombre << endl;
    }
};

#endif
