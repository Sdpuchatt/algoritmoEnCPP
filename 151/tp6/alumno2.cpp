#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// Definición de la estructura de los alumnos
struct Alumno {
    string nombre;
    string carrera;
    int anio;
    int id;

    // Sobrecarga de operadores para comparar alumnos por ID
    bool operator<(const Alumno& otro) const {
        return id < otro.id;
    }

    bool operator>(const Alumno& otro) const {
        return id > otro.id;
    }
};

// Función para cargar alumnos desde el archivo
void cargarAlumnos(vector<Alumno>& alumnos) {
    ifstream archivo("Alumnos.txt");
    Alumno a;
    while (archivo >> a.id >> a.nombre >> a.carrera >> a.anio) {
        alumnos.push_back(a);
    }
    archivo.close();
}

// Función para guardar alumnos en el archivo
void guardarAlumnos(const vector<Alumno>& alumnos) {
    ofstream archivo("Alumnos.txt");
    for (const Alumno& a : alumnos) {
        archivo << a.id << " " << a.nombre << " " << a.carrera << " " << a.anio << endl;
    }
    archivo.close();
}

// Mostrar todos los alumnos
void mostrarAlumnos(const vector<Alumno>& alumnos) {
    for (const Alumno& a : alumnos) {
        cout << "ID: " << a.id << " - Nombre: " << a.nombre << " - Carrera: " << a.carrera << " - Año: " << a.anio << endl;
    }
}

// Buscar y mostrar un alumno por ID
void buscarAlumno(const vector<Alumno>& alumnos, int id) {
    auto it = find_if(alumnos.begin(), alumnos.end(), [id](const Alumno& a) {
        return a.id == id;
    });
    if (it != alumnos.end()) {
        cout << "ID: " << it->id << " - Nombre: " << it->nombre << " - Carrera: " << it->carrera << " - Año: " << it->anio << endl;
    } else {
        cout << "Alumno no encontrado." << endl;
    }
}

// Insertar un nuevo alumno
void insertarAlumno(vector<Alumno>& alumnos, const Alumno& nuevo) {
    alumnos.push_back(nuevo);
    guardarAlumnos(alumnos);
}

// Eliminar un alumno por ID
void eliminarAlumno(vector<Alumno>& alumnos, int id) {
    alumnos.erase(remove_if(alumnos.begin(), alumnos.end(), [id](const Alumno& a) {
        return a.id == id;
    }), alumnos.end());
    guardarAlumnos(alumnos);
}

// Ordenar y mostrar los alumnos
void ordenarAlumnos(vector<Alumno>& alumnos, bool ascendente) {
    if (ascendente) {
        sort(alumnos.begin(), alumnos.end());
    } else {
        sort(alumnos.begin(), alumnos.end(), greater<Alumno>());
    }
    mostrarAlumnos(alumnos);
}

int main() {
    vector<Alumno> alumnos;
    cargarAlumnos(alumnos);

    // Menú interactivo para realizar las operaciones
    int opcion;
    do {
        cout << "\n1. Mostrar todos los alumnos\n2. Buscar alumno\n3. Insertar alumno\n4. Eliminar alumno\n5. Ordenar alumnos (ascendente/descendente)\n6. Salir\n";
        cout << "Elige una opción: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            mostrarAlumnos(alumnos);
            break;
        case 2: {
            int id;
            cout << "Ingresa el ID del alumno: ";
            cin >> id;
            buscarAlumno(alumnos, id);
            break;
        }
        case 3: {
            Alumno nuevo;
            cout << "Ingresa el ID: ";
            cin >> nuevo.id;
            cout << "Ingresa el nombre: ";
            cin >> nuevo.nombre;
            cout << "Ingresa la carrera: ";
            cin >> nuevo.carrera;
            cout << "Ingresa el año: ";
            cin >> nuevo.anio;
            insertarAlumno(alumnos, nuevo);
            break;
        }
        case 4: {
            int id;
            cout << "Ingresa el ID del alumno a eliminar: ";
            cin >> id;
            eliminarAlumno(alumnos, id);
            break;
        }
        case 5: {
            bool ascendente;
            cout << "Ordenar en forma ascendente (1) o descendente (0): ";
            cin >> ascendente;
            ordenarAlumnos(alumnos, ascendente);
            break;
        }
        case 6:
            cout << "Saliendo del programa..." << endl;
            break;
        default:
            cout << "Opción no válida." << endl;
        }
    } while (opcion != 6);

    return 0;
}
