// 7. Hacer un programa en C++ que pida dos números enteros. El programa pedirá de nuevo el
// segundo número mientras no sea mayor que el primero. El programa terminará
// escribiendo los dos números.
#include <iostream>
using namespace std;
int main()
// main() es donde empieza la ejecución
{
double a = 0 , b = 0;
cout << "Ingrese dos numeros, a y b. Si b es mayor terminara el programa." << endl; // Muestra Hola mundo!
cout << "Ingrese el numero a: ";
cin >> a;
cout << "Ingrese el numero b: ";
cin >> b;
bool esMayor = false;
while(!esMayor) {
    if (b > a){
        cout << "b es mayor que a "<< a << " > " << b << endl;
        esMayor = true;
    }
    else{
        cout << "a es menor que b, ingrese nuevamente b: ";
        cin >> b;
    }
}

return 0;

}

