#include "include/Figura.hpp"
#include "include/Cuadrado.hpp"
#include "include/Circulo.hpp"
#include <iostream>
using namespace std;

int main() {
    Cuadrado cuadrado(5);
    Circulo circulo(3);

    cout << "Cuadrado:" << endl;
    cout << " - Perimetro: " << cuadrado.perimetro() << endl;
    cout << " - Area: " << cuadrado.area() << endl;

    cout << "\nCirculo:" << endl;
    cout << " - Perimetro: " << circulo.perimetro() << endl;
    cout << " - Area: " << circulo.area() << endl;

    // Uso polimórfico
    Figura* figuras[] = {&cuadrado, &circulo};

    cout << "\nFiguras (polimorfismo):" << endl;
    for (int i = 0; i < 2; i++) {
        cout << " - Perimetro: " << figuras[i]->perimetro() << endl;
        cout << " - Area: " << figuras[i]->area() << endl;
    }

    return 0;
}
