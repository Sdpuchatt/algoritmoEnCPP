#include <iostream>
#include <string>
using namespace std;

class Articulo {
private:
    int id;
    string nombre;
    float precio;
public:
    Articulo() {
        id = 0;
        nombre = "";
        precio = 0.0f;
    }

    Articulo(int _id, string _nombre, float _precio) {
        id = _id;
        nombre = _nombre;
        precio = _precio;
    }

    int getId() const { return id; }
    string getNombre() const { return nombre; }
    float getPrecio() const { return precio; }

    void mostrarArticulo() const {
        cout << "ID: " << id << ", Nombre: " << nombre << ", Precio: $" << precio << endl;
    }
};
