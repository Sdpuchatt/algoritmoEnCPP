#include <iostream>
#include <fstream>
#include <string> 
using namespace std;

int const longitud = 100; 
typedef struct {
    int codigo;
    string nombre;
    string apellido;
    string cargo;
} tPersona;

typedef struct {
    int contador;
    tPersona personas[longitud]; 
} tEmpresa;

tEmpresa isft151;

int main() {
    isft151.personas[0] = {1, "Juan", "Perez", "Gerente"};
    cout << isft151.personas[0].nombre << endl;
    isft151.contador = 1;
    cout << isft151.contador << endl;
    isft151.contador ++;
    isft151.contador ++;
    isft151.contador ++;
    cout << isft151.contador << endl;

    return 0;
}
        // {1, "Juan", "Perez", "Gerente"},
        // {2, "Ana", "Gomez", "Subgerente"},
        // {3, "Luis", "Martinez", "Analista"},
        // {4, "Maria", "Lopez", "Secretaria"},
        // {5, "Pedro", "Rodriguez", "Contador"},
        // {6, "Laura", "Garcia", "Administrativa"},
        // {7, "Carlos", "Sanchez", "Supervisor"},
        // {8, "Marta", "Romero", "Asistente"},
        // {9, "Jose", "Fernandez", "Tecnico"},
        // {10, "Lucia", "Diaz", "Ingeniera"}


