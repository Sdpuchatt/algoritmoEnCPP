#ifndef FIGURA_HPP
#define FIGURA_HPP

class Figura {
protected:
    float x;

public:
    Figura(float x);
    virtual float perimetro() const = 0; // Método puro
    virtual float area() const = 0;      // Método puro
    virtual ~Figura() = default;         // Destructor virtual
};

#endif
