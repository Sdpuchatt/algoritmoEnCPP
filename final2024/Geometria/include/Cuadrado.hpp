#ifndef CUADRADO_HPP
#define CUADRADO_HPP

#include "Figura.hpp"

class Cuadrado : public Figura {
public:
    Cuadrado(float x);
    float perimetro() const override;
    float area() const override;
};

#endif
