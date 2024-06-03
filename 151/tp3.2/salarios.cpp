// b. Hacer un programa en C++ que ayude a una empresa a
// incrementar los salarios de los trabajadores de la siguiente manera:
// Tipo de salario %
// De 0 a $9 000 20%
// De $9 000 a $15 000 10%
// De $15 000 a $20 000 5%
// Más de $20 000 3%

#include <iostream>
using namespace std;
double aumentarSalarios(double salario);
int main()
{

double salario = aumentarSalarios(5000);
cout << "Su nuevo salario es: " << salario;
return 0;

}
double aumentarSalarios(double salario){
    if(salario > 0 && salario < 9000){
        salario *=1.20;    
    }
    else if(salario >= 9000 && salario < 15000){
            salario *= 1.1;
         }
         else if(salario >= 15000 && salario < 20000){
            salario *= 1.05; 
         }
         else if(salario > 20000){
            salario *= 1.03; 
         }
    return salario;
}