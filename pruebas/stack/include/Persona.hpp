#ifndef PERSONA_HPP
#define PERSONA_HPP
#include <string>

using namespace std;

class Persona{

    private:
        int id;
        string nombre;
        string dni;
        int edad;
    public:
        Persona(int id, string nombre, string dni, int edad);
        ~Persona();
        void mostrar();
};
#endif