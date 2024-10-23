#include <iostream>
#include <string>

using namespace std;

// Clase Persona
class Persona {
protected:
    string nombre;
    int edad;

public:
    // Constructor
    Persona(string _nombre, int _edad) {
    this->nombre = _nombre;
    this->edad=_edad; 
    } 
        

    // Método virtual para permitir el polimorfismo
    virtual void presentarse() {
        cout << "Hola, soy " << nombre << " y tengo " << edad << " años." << endl;
    }

    // Destructor virtual
    virtual ~Persona() {}
};

// Clase Superheroe que hereda de Persona
class Superheroe : public Persona {
private:
    string superpoder;

public:
    // Constructor
    Superheroe(string _nombre, int _edad, string _superpoder) : Persona(_nombre, _edad), superpoder(_superpoder) {}

    // Sobreescribir el método presentarse
    void presentarse() override {
        cout << "Soy " << nombre << ", tengo " << edad << " años y mi superpoder es " << superpoder << "." << endl;
    }

    // Destructor
    ~Superheroe() {}
};

int main() {
    // Crear objetos de Persona y Superheroe
    // Persona* persona1 = new Persona("Carlos", 30);
    // Persona* heroe1 = new Superheroe("Juan", 25, "Volar");
 
    // Usar polimorfismo
    // persona1->presentarse();  // Llama al método de Persona
    // heroe1->presentarse();    // Llama al método sobreescrito de Superheroe

    // Liberar memoria
    // delete persona1;
    // delete heroe1;

    // return 0;
   
    // Crear un array de punteros a Persona
    Persona* personas[3];

    // Instanciar objetos Persona y Superheroe
    personas[0] = new Persona("Carlos", 30);
    personas[1] = new Superheroe("Juan", 25, "Volar");
    personas[2] = new Persona("Lucía", 22);

    // Iterar sobre el array y llamar al método presentarse
    for (int i = 0; i < 3; ++i) {
        personas[i]->presentarse();
    }

    // Liberar memoria
    for (int i = 0; i < 3; ++i) {
        delete personas[i];
    }

    return 0;
}
