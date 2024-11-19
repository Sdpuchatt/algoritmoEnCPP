#include "../include/Circulo.hpp"
#include <cmath> // Para constantes matemáticas como M_PI

Circulo::Circulo(float _x) : Figura(_x) {}

float Circulo::perimetro() const {
    return 2 * M_PI * x;
}

float Circulo::area() const {
    return M_PI * x * x;
}
