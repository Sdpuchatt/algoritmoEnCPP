// 3. Hacer un programa en C++ para determinar el promedio de tres notas y determinar si el
// estudiante aprobó o no.
#include <iostream>
using namespace std;
double promedioDeNotas(double x, double y, double z);
int main()
{
double nota1 = 0, nota2 = 0, nota3 = 0;
double resultado = 0 ;
cout << "Calculemos el promedio de 3 notas!" << endl;
cout << "Ingrese la primera nota: " ;
cin >> nota1;
cout << "Ingrese la segunda nota: " ;
cin >> nota2;
cout << "Ingrese la tercera nota ";
cin >> nota3;

resultado = promedioDeNotas(nota1, nota2, nota3);
if(resultado >= 7){
    cout << "Estas aprobado, su promedio es: " << resultado; 
}
else{
     cout << "Estas desaprobado, su promedio es: " << resultado; 
}
return 0;

}
double promedioDeNotas(double x, double y, double z){
    
    return (x+y+z)/3;
}


