#include "include/Vehiculo.hpp"
#include "include/Coche.hpp"
#include "include/Moto.hpp"
#include "include/Taller.hpp"
#include <iostream>

using namespace std;

int main() {
    Taller taller(10);

    Coche coche("rojo", "Toyota", 2000);
    Moto moto("negro", "Honda", 250);

    taller.meter(&coche);
    taller.meter(&moto);

    taller.arreglarVehiculos();

    return 0;
}
