// Coche.cpp
#include "../include/Coche.hpp"
#include <iostream>

Coche::Coche(string _color, string _marca, int _motor) : Vehiculo(_color, _marca){

    motor = _motor;
} 

void Coche::arrancar() {
    cout << "Arrancando coche" << endl;
}

void Coche::parar() {
    cout << "Parando coche" << endl;
}

void Coche::repostar() {
    cout << "Repostando coche" << endl;
}
