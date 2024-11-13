// Taller.cpp
#include "../include/Taller.hpp"
#include <iostream>

Taller::Taller(int max_vehiculos) : max_vehiculos(max_vehiculos), num_vehiculos(0) {}

void Taller::meter(Vehiculo* vehiculo) {
    if (num_vehiculos < max_vehiculos) {
        vehiculos.push_back(vehiculo);
        num_vehiculos++;
    }
}

void Taller::arreglarVehiculos() {
    for (auto it = vehiculos.begin(); it != vehiculos.end(); ) {
        cout << "Auto arreglado -> " << (*it)->getNombre() << endl;
        it = vehiculos.erase(it);
        num_vehiculos--;
    }
}
