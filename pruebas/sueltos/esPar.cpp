#include <iostream>
using namespace std;

int main(){
    int numero;
    numero = 12.5;
    if(numero % 2 == 0){
        cout << "El numero ingresado " << numero << " es par.";
    }
    else{
        cout << "El numero ingresado " << numero << " es impar";
    }
    return 0;
}