// 2. Hacer un programa en C++ para ayudar a un trabajador a saber cuál será su salario
// semanal, se sabe que si trabaja 40 horas o menos, se le pagará $200 por hora, pero si
// trabaja más de 40 horas entonces las horas extras se le pagarán a $250 por hora.
#include <iostream>
using namespace std;

void calcularSalario(double horas);
int main()
{
double horas = 0;
cout << "Esto es una calculadora de salarios" << endl; 
cout << "Cuantas horas trabajo esta semana? " ; 
cin >> horas;
calcularSalario(horas);
return 0;

}
void calcularSalario(double horas){
    double aux = 0;
    
    if(horas >= 40){
        aux = horas - 40;
        cout << "Usted trabajo " << horas << " semanales. Su sueldo es: $" << (40 * 200) + (aux * 250);
    }
    else{
        cout << "Usted trabajo " << horas << " semanales. Su sueldo es: $" << (horas * 200);
    }
}

