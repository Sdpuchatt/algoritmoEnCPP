#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string entradaCompleta;
    string nombre, apellido, direccion;
    int edad;
    long long telefono; // Usamos long long para almacenar números grandes

    cout << "Ingresa nombre, apellido, edad, teléfono y dirección (separados por espacios): ";
    // getline(cin, entradaCompleta);
    cin >> nombre >> apellido >> edad >> telefono >> direccion;

    // Ahora procesamos la entrada completa

    // Leemos los valores desde la entrada completa
    // istringstream ss(entradaCompleta);
    // getline(ss, direccion); // Capturamos la dirección restante

    // Mostramos los valores capturados
    cout << "Nombre: " << nombre << endl;
    cout << "Apellido: " << apellido << endl;
    cout << "Edad: " << edad << endl;
    cout << "Teléfono: " << telefono << endl;
    cout << "Dirección: " << direccion << endl;

    return 0;
}
