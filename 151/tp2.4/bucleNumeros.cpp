// 4. Hacer un programa en C++ que pida números hasta que el usuario introduzca 99, luego
// mostrar los números y el promedio.

#include <iostream>
using namespace std;
int main()
// main() es donde empieza la ejecución
{
double num = 0;
double sumatoria;
int contador = 0;
bool es99 = false;
cout << "Sumaremos y haremos el promedio de todos los\n numeros hasta que introduzca 99. \n" << endl;

    while(!es99){
        cout << "Intruduzca un numero: ";
        cin >> num;
        if(num == 99){
            es99 = true;
        }
        else{
            contador ++;
            sumatoria = sumatoria + num;
        }
    }


cout << "El promedio de numeros ingresados es: " ;
if(contador == 0){
    cout << num;
}
else{
    cout << sumatoria / contador;
}

return 0;

}

