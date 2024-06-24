#include <iostream>
#include <fstream>
using namespace std;

struct tPersona {
    int codigo;
    string nombre;
    string apellido;
    string cargo;
};

void guardarPersonasEnArchivo(tPersona personas[], int longitud, const string &nombreArchivo);

int main() {
    const int tam = 10;
    tPersona personas[tam] = {
        {1, "Juan", "Perez", "Gerente"},
        {2, "Ana", "Gomez", "Subgerente"},
        {3, "Luis", "Martinez", "Analista"},
        {4, "Maria", "Lopez", "Secretaria"},
        {5, "Pedro", "Rodriguez", "Contador"},
        {6, "Laura", "Garcia", "Administrativa"},
        {7, "Carlos", "Sanchez", "Supervisor"},
        {8, "Marta", "Romero", "Asistente"},
        {9, "Jose", "Fernandez", "Tecnico"},
        {10, "Lucia", "Diaz", "Ingeniera"}
    };

    guardarPersonasEnArchivo(personas, tam, "db.txt");

    return 0;
}

void guardarPersonasEnArchivo(tPersona personas[], int tam, const string &nombreArchivo) {
    ofstream archivo(nombreArchivo);
    if (!archivo.is_open()) {
        cerr << "No se pudo abrir el archivo para escribir." << endl;
        return;
    }

    for (int i = 0; i < tam; ++i) {
        archivo << personas[i].codigo << " "
                << personas[i].nombre << " "
                << personas[i].apellido << " "
                << personas[i].cargo << endl;
    }

    archivo.close();
    cout << "Datos guardados correctamente en " << nombreArchivo << endl;
}