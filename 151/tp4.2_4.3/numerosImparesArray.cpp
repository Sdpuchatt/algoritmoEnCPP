#include <iostream>
#include <math.h>
using namespace std;


int main()
{

    int contador = 0;
    int contadorImpares = 0;
    while(contador < 100){
        if(contador%2 != 0){
            contadorImpares++;
        }
        contador++;
    }    
    int arrayNumerosImpares [contadorImpares];
    contador = 0;
    contadorImpares = 0;
    while(contador < 100){
        if(contador%2 != 0){
            arrayNumerosImpares[contadorImpares] = contador;
            contadorImpares++;
        }
        contador++;
    } 
    
    for(int i = 0; i < contadorImpares;i++){
        cout << arrayNumerosImpares[i] << " ";
    }
    return 0;
}


