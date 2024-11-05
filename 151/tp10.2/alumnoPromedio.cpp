#include <iostream>
#include <string>
using namespace std;

struct Alumno {
    string nombre;
    int edad;
    float promedio;
};

void ingresarDatos(Alumno *alumno) {
    cout << "Ingrese el nombre del alumno: ";
    cin >> alumno->nombre;
    cout << "Ingrese la edad del alumno: ";
    cin >> alumno->edad;
    cout << "Ingrese el promedio del alumno: ";
    cin >> alumno->promedio;
}

Alumno* obtenerMejorPromedio(Alumno *alumnos, int cantidad) {
    Alumno *mejor = &alumnos[0];
    for (int i = 1; i < cantidad; ++i) {
        if (alumnos[i].promedio > mejor->promedio) {
            mejor = &alumnos[i];
        }
    }
    return mejor;
}

int main() {
    const int numAlumnos = 3;
    Alumno alumnos[numAlumnos];

    // Ingresar datos para cada alumno
    for (int i = 0; i < numAlumnos; ++i) {
        cout << "Datos para el alumno " << (i + 1) << ":" << endl;
        ingresarDatos(&alumnos[i]);
    }

    // Encontrar el alumno con el mejor promedio
    Alumno *mejorAlumno = obtenerMejorPromedio(alumnos, numAlumnos);

    // Mostrar los datos del alumno con el mejor promedio
    cout << "\nEl alumno con el mejor promedio es:" << endl;
    cout << "Nombre: " << mejorAlumno->nombre << endl;
    cout << "Edad: " << mejorAlumno->edad << endl;
    cout << "Promedio: " << mejorAlumno->promedio << endl;

    return 0;
}
