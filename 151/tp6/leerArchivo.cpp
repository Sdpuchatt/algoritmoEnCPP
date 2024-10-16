#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void leerAlumnos(const string& nombreArchivo) {
    ifstream archivo(nombreArchivo);
    if (archivo.is_open()) {
        string linea;
        while (getline(archivo, linea)) {
            cout << linea << endl;  // Imprimir cada línea del archivo
        }
        archivo.close();
    } else {
        cerr << "No se pudo abrir el archivo para leer." << endl;
    }
}

int main() {
    leerAlumnos("alumnos.txt");
    return 0;
}
