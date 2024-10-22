// #include "../include/articulo.hpp" //dos puntos xq se debe retroceder un nivel en el árbol de directorios para encontrar el directorio "include", y luego buscar el archivo "articulo.hpp" dentro de ese directorio.
#include "article.hpp" 
#include <string>
#include <iostream>

using namespace std;

//esto es otra forma de inicializar que se llama lista de iniciacion
//en lugar de inicializarlos dentro del cuerpo del constructor, se hace directamente asi
// Articulo::Articulo(string _codigo, string _nombre, float _precio) : codigoArticulo(_codigo), nombre(_nombre), precio(_precio) {}

Article::Article(string _code, string _name, float _price) 
{
    this->code = _code;
    this->name = _name;
    this->price = _price;
};

Article::~Article()   // solo a modo de prueba
{
    cout << "Articulo destruido" << endl;
};

string Article::getName()
    {
        return this->name;
    }

string Article::getCode()
    {
        return this->code;
    }

float Article::getPrice()
    {
        return this->price;
    }

