#ifndef CIRCULO_HPP
#define CIRCULO_HPP

#include "Figura.hpp"

class Circulo : public Figura {
public:
    Circulo(float x);
    float perimetro() const override;
    float area() const override;
};

#endif
