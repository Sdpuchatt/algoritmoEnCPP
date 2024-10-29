/*
Las tablas hash son estructuras de datos para almacenar pares clave-valor, utilizando una función hash.
*/

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> tablaHash;
    tablaHash["uno"] = 1;
    tablaHash["dos"] = 2;
    tablaHash["tres"] = 3;
    tablaHash["Sergio"] = 4;

    for (auto& par : tablaHash)
        cout << par.first << " -> " << par.second << endl;

    return 0;
}
