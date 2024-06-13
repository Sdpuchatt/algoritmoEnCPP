#include <iostream>
#include <math.h>
using namespace std;
bool esPrimo(int num);
int main()
{

int longitud = 100;
typedef int otroArray;
otroArray numerosPrimos[longitud+1];
int contador = 0;
int contadorNumerosPrimos = 0;
bool finalDeCarrera = false;
while(!finalDeCarrera){
    if(esPrimo(contador)){
        numerosPrimos[contadorNumerosPrimos] = contador;
        contadorNumerosPrimos++;
        if(contadorNumerosPrimos == 100){
            finalDeCarrera = true;
        }
    }
    contador++;
}

for(int i = 0; i < 100; i++){
    cout << numerosPrimos[i] << " ";
    if(i%10 == 9 && i != 0){
        cout << "\n";
    }

}
return 0;

}
bool esPrimo(int num) {
    if (num <= 0) {
        return false;
    }
    if(num == 1){
        return true;
    }
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}