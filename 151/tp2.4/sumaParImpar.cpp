// 6. Hacer un programa en C++ para Calcular la suma de los números pares e impares
// comprendidos entre 1 y n (n lo introduce el usuario).
#include <iostream>
using namespace std;
int main()
{
double num = 0, aux = 0;
int contador = 1;
int contadorPar = 0, contadorImpar = 0;


cout << "Sumaremos los numeros impares e impares dependiendo del numero que ingrese." << endl; 
cout << "Ingrese el numero" << endl; 

cin >> num;
while ((contador <= num)){
    if(contador%2 == 0){
        contadorPar ++;
    }
    else{
        contadorImpar ++;
    }
    
    contador ++;
}
cout << "Suma numeros pares " << contadorPar << endl;
cout << "Suma numeros impares " << contadorImpar << endl;

return 0;

}

