#include <iostream>
#include <string>
using namespace std;

class Cliente {
private:
    int id;
    string nombre;
public:
    Cliente() {
        id = 0;
        nombre = "";
    }

    Cliente(int _id, string _nombre) {
        id = _id;
        nombre = _nombre;
    }

    int getId() const { return id; }
    string getNombre() const { return nombre; }

    void mostrarCliente() const {
        cout << "ID Cliente: " << id << ", Nombre: " << nombre << endl;
    }
};
