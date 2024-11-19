#include "../include/Cuadrado.hpp"

Cuadrado::Cuadrado(float _x) : Figura(_x) {}

float Cuadrado::perimetro() const {
    return 4 * x;
}

float Cuadrado::area() const {
    return x * x;
}
