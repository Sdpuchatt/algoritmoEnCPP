#include <iostream>
#include <fstream>  // Para manejo de archivos
#include <string>

using namespace std;

struct Alumno {
    int id;
    string nombre;
    string carrera;
};

void escribirAlumno(const Alumno& alumno, const string& nombreArchivo) {
    ofstream archivo(nombreArchivo, ios::app);  // Abrir en modo append (añadir al final)
    if (archivo.is_open()) {
        archivo << alumno.id << ", " << alumno.nombre << ", " << alumno.carrera << endl;
        archivo.close();
        cout << "Datos guardados correctamente." << endl;
    } else {
        cerr << "No se pudo abrir el archivo para escribir." << endl;
    }
}

int main() {
    Alumno alumno = {1, "Juan Perez", "Ingeniería en Sistemas"};
    escribirAlumno(alumno, "alumnos.txt");
    return 0;
}
