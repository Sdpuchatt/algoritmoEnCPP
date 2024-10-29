#include <Persona.hpp>
#include <iostream>
using namespace std;
#include <string>
Persona::Persona(int id, string nombre, string dni, int edad){
    this->id = id;
    this->nombre = nombre;
    this->dni = dni;
    this->edad = edad;
}

Persona::~Persona(){
    cout << "persona destruida" << endl;
}

void Persona::mostrar(){
    cout << "id: " << id << endl;
    cout << "nombre: " << nombre << endl;
    cout << "dni: " << dni << endl;
    cout << "edad: " << edad << endl;
}
string Persona::getNombre(){
    return nombre;
}
void Persona::setNombre(string nombre){
    this->nombre = nombre;
}

