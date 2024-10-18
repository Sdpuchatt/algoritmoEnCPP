#include <iostream>
#include "Persona.hpp"

int main() {
    Persona p1(1,"Sergio Daniel Puchatt", "34500492",35);
 
    Persona p2(2,"Mayra Berenice Saravia", "34500492",35);

    p1.mostrar();
    p2.mostrar();
    return 0;
}