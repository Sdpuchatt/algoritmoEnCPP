#ifndef ARTICULO_H
#define ARTICULO_H

#include <string>
#include <iostream>
using namespace std;

class Articulo {
private:
    int id;
    string nombre;
    float precio;
public:
    Articulo() : id(0), nombre(""), precio(0.0f) {}
    Articulo(int id, string nombre, float precio) : id(id), nombre(nombre), precio(precio) {}

    int getId() const { return id; }
    string getNombre() const { return nombre; }
    float getPrecio() const { return precio; }

    void mostrarArticulo() const {
        cout << "ID: " << id << ", Nombre: " << nombre << ", Precio: $" << precio << endl;
    }
};

#endif
