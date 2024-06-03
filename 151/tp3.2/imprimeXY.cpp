// d. Hacer un programa en C++ que lea dos números x e y, luego hacer
// la diferencia x - y; si la diferencia es menor o igual a 10, entonces
// escribir todos los números comprendidos entre y y x

#include <iostream>
using namespace std;
int main()

{
int x, y;
x = 2;
y = 8;
int diferencia = x - y;
if(diferencia  <= 10){
    if( x < y){
        for(int i = x; i < y; i++){
            cout << " " << i; 
        }
    }
    else{
        for (int i = y; i < x; i++){
            cout << " " << i; 
        }
    }
}
cout << "\nFinalizo el programa" << endl; 

return 0;

}
