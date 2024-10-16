#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

const int MAX_ALUMNOS = 100;

struct Alumno {
    int id;
    string nombre;
    string carrera;
    int anio;
};

// Sobrecarga de operadores para comparar Alumnos
bool operator>(const Alumno& a, const Alumno& b) {
    return a.id > b.id;
}

bool operator<(const Alumno& a, const Alumno& b) {
    return a.id < b.id;
}

// Función para guardar el array de alumnos en archivo
void guardarAlumnos(Alumno alumnos[], int contador, const string& nombreArchivo) {
    ofstream archivo(nombreArchivo);
    if (archivo.is_open()) {
        for (int i = 0; i < contador; i++) {
            archivo << alumnos[i].id << ", " << alumnos[i].nombre << ", " << alumnos[i].carrera << ", " << alumnos[i].anio << endl;
        }
        archivo.close();
        cout << "Datos guardados correctamente en " << nombreArchivo << "." << endl;
    } else {
        cerr << "No se pudo abrir el archivo para escribir." << endl;
    }
}

// Función para leer los alumnos desde un archivo y cargarlos en un array
int cargarAlumnos(Alumno alumnos[], const string& nombreArchivo) {
    ifstream archivo(nombreArchivo);
    if (archivo.is_open()) {
        string linea;
        int contador = 0;
        while (contador < MAX_ALUMNOS && archivo >> alumnos[contador].id >> alumnos[contador].nombre >> alumnos[contador].carrera >> alumnos[contador].anio) {
            contador++;
        }
        archivo.close();
        return contador;
    } else {
        cerr << "No se pudo abrir el archivo para leer." << endl;
        return 0;
    }
}

// Función para mostrar todos los alumnos
void mostrarAlumnos(Alumno alumnos[], int contador) {
    for (int i = 0; i < contador; i++) {
        cout << "ID: " << alumnos[i].id << ", Nombre: " << alumnos[i].nombre
             << ", Carrera: " << alumnos[i].carrera << ", Año: " << alumnos[i].anio << endl;
    }
}

// Función para buscar un alumno por ID y mostrarlo
void buscarAlumno(Alumno alumnos[], int contador, int idBuscado) {
    for (int i = 0; i < contador; i++) {
        if (alumnos[i].id == idBuscado) {
            cout << "Alumno encontrado: " << endl;
            cout << "ID: " << alumnos[i].id << ", Nombre: " << alumnos[i].nombre
                 << ", Carrera: " << alumnos[i].carrera << ", Año: " << alumnos[i].anio << endl;
            return;
        }
    }
    cout << "Alumno no encontrado." << endl;
}

// Función para insertar un alumno
void insertarAlumno(Alumno alumnos[], int& contador) {
    if (contador >= MAX_ALUMNOS) {
        cout << "No se pueden agregar más alumnos." << endl;
        return;
    }
    Alumno nuevoAlumno;
    cout << "Ingrese ID: ";
    cin >> nuevoAlumno.id;
    cout << "Ingrese Nombre: ";
    cin >> nuevoAlumno.nombre;
    cout << "Ingrese Carrera: ";
    cin >> nuevoAlumno.carrera;
    cout << "Ingrese Año: ";
    cin >> nuevoAlumno.anio;
    
    alumnos[contador] = nuevoAlumno;
    contador++;
    cout << "Alumno agregado correctamente." << endl;
}

// Función para eliminar un alumno por ID
void eliminarAlumno(Alumno alumnos[], int& contador, int idEliminar) {
    for (int i = 0; i < contador; i++) {
        if (alumnos[i].id == idEliminar) {
            for (int j = i; j < contador - 1; j++) {
                alumnos[j] = alumnos[j + 1];
            }
            contador--;
            cout << "Alumno eliminado correctamente." << endl;
            return;
        }
    }
    cout << "Alumno no encontrado." << endl;
}

// Función para ordenar los alumnos de forma ascendente o descendente
void ordenarAlumnos(Alumno alumnos[], int contador, bool ascendente = true) {
    if (ascendente) {
        sort(alumnos, alumnos + contador, [](Alumno a, Alumno b) { return a < b; });
    } else {
        sort(alumnos, alumnos + contador, [](Alumno a, Alumno b) { return a > b; });
    }
    cout << "Alumnos ordenados correctamente." << endl;
}

int main() {
    Alumno alumnos[MAX_ALUMNOS];
    int contador = cargarAlumnos(alumnos, "alumnos.txt");  // Cargar los alumnos desde el archivo
    int opcion, idBuscado;

    do {
        cout << "1. Mostrar alumnos\n2. Buscar alumno\n3. Insertar alumno\n4. Eliminar alumno\n";
        cout << "5. Ordenar alumnos ascendente\n6. Ordenar alumnos descendente\n7. Guardar y salir\n";
        cout << "Ingrese una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                mostrarAlumnos(alumnos, contador);
                break;
            case 2:
                cout << "Ingrese ID del alumno a buscar: ";
                cin >> idBuscado;
                buscarAlumno(alumnos, contador, idBuscado);
                break;
            case 3:
                insertarAlumno(alumnos, contador);
                break;
            case 4:
                cout << "Ingrese ID del alumno a eliminar: ";
                cin >> idBuscado;
                eliminarAlumno(alumnos, contador, idBuscado);
                break;
            case 5:
                ordenarAlumnos(alumnos, contador, true);  // Orden ascendente
                mostrarAlumnos(alumnos, contador);
                break;
            case 6:
                ordenarAlumnos(alumnos, contador, false);  // Orden descendente
                mostrarAlumnos(alumnos, contador);
                break;
            case 7:
                guardarAlumnos(alumnos, contador, "alumnos.txt");
                cout << "Datos guardados y programa finalizado." << endl;
                break;
            default:
                cout << "Opción no válida." << endl;
        }
    } while (opcion != 7);

    return 0;
}
