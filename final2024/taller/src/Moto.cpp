// Moto.cpp
#include "../include/Moto.hpp"
#include <iostream>

Moto::Moto(string color, string marca, int cilindrada) : Vehiculo(color, marca), cilindrada(cilindrada) {}

void Moto::arrancar() {
    cout << "Arrancando moto" << endl;
}

void Moto::parar() {
    cout << "Parando moto" << endl;
}

void Moto::repostar() {
    cout << "Repostando moto" << endl;
}
