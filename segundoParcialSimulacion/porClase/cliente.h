#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente {
public:
    std::string nombre;
    std::string direccion;
    
    Cliente(std::string nombre, std::string direccion);
};

#endif
