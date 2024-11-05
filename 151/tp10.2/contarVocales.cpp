#include <iostream>
using namespace std;

void contarVocales(char *cadena) {
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    while (*cadena) {
        switch (*cadena) {
            case 'a': case 'A': a++; break;
            case 'e': case 'E': e++; break;
            case 'i': case 'I': i++; break;
            case 'o': case 'O': o++; break;
            case 'u': case 'U': u++; break;
        }
        cadena++;
    }
    cout << "Vocales encontradas: A=" << a << ", E=" << e << ", I=" << i << ", O=" << o << ", U=" << u << endl;
}

int main() {
    char cadena[100];
    cout << "Ingrese una cadena: ";
    cin.getline(cadena, 100);
    contarVocales(cadena);
    return 0;
}
