// Moto.hpp
#ifndef MOTO_HPP
#define MOTO_HPP

#include "Vehiculo.hpp"

class Moto : public Vehiculo {
private:
    int cilindrada;

public:
    Moto(string color, string marca, int cilindrada);
    void arrancar() override;
    void parar() override;
    void repostar() override;
};

#endif
