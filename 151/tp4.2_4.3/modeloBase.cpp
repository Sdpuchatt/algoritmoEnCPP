#include <iostream>
#include <string>
#include <list>

using namespace std;
int main()

{

list<int> lista;
lista.push_back(10); 
lista.push_front(20);
for(int e : lista){
    cout << e << endl;
}

list<int> lista2 = {10, 20, 30};
lista2.pop_back(); 
lista2.pop_front(); 
for(int e : lista2){
    cout << e << endl;
}

    string texto = "Hola, Mundo!";

    // 1. Obtener la longitud de la cadena
    cout << "Longitud: " << texto.length() << endl;

    // 2. Concatenar cadenas
    string saludo = "Hola";
    string mundo = "Mundo";
    string frase = saludo + ", " + mundo + "!";
    cout << "Frase: " << frase << endl;

    // 3. Encontrar un substring
    int posicion = texto.find("Mundo");
    
    if (posicion) {
        cout << "'Mundo' encontrado en la posicion: " << posicion << endl;
    }

    // 4. Extraer un substring
    string subcadena = texto.substr(0, 4);
    cout << "Subcadena: " << subcadena << endl;
    string nombre = "Jorge";
    do{
    cout << "¿Quien eres ?";
     cin >> nombre;
    }while(nombre != "Jorge");
    cout << "¡Eres Jorge!";


return 0;

}
