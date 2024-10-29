/*
Un set almacena valores únicos y permite operaciones como búsqueda y eliminación de elementos.
*/

#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> conjunto = {1, 2, 3, 4, 5};
    conjunto.insert(6);
    conjunto.erase(3);

    for (int valor : conjunto) cout << valor << " ";
    return 0;
}
