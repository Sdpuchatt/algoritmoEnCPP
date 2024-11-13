// Taller.hpp
#ifndef TALLER_HPP
#define TALLER_HPP

#include "Vehiculo.hpp"
#include <list>
#include <string>
using namespace std;

class Taller {
private:
    int max_vehiculos;
    int num_vehiculos;
    list<Vehiculo*> vehiculos;

public:
    Taller(int max_vehiculos);
    void meter(Vehiculo* vehiculo);
    void arreglarVehiculos();
};

#endif
