// Coche.hpp
#ifndef COCHE_HPP
#define COCHE_HPP

#include "Vehiculo.hpp"

class Coche : public Vehiculo {
private:
    int motor;

public:
    Coche(string color, string marca, int motor);
    void arrancar() override;
    void parar() override;
    void repostar() override;
};

#endif
