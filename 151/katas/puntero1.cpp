#include <iostream>
using namespace std;

int main() // main() es donde empieza la ejecución
{
    // A.
    int numero;
    numero = 150;
    int *puntero1 = NULL;
    puntero1 = &numero;

    cout << *puntero1<< endl; // muestra contenido de la variable
    cout << puntero1 ; //muestra direccion d memoria
    
    //B.
    cout << "B"<< endl; 
    cout << numero << endl;// mostrar variable
    cout << puntero1<< endl; // mostrar direccion de puntero
    cout << *puntero1 << endl; // mostrar el contenido de la variable donde apunta el puntero
    cout << "Antes de cambiar variable\n" ; // mostrar
    numero = 500;
    cout << numero << endl;
    cout << "Luego de cambiar la variable por puntero\n" ; 
    *puntero1 = 250;
    cout << numero << endl;

    // crear otro puntero
    int *puntero2 = NULL;
    puntero2 = puntero1; // direccion de memoria
    cout << puntero1 << endl; 
    cout << puntero2 << endl; 

    
    return 0;
}
