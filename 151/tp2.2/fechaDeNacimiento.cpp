// 1. Resolver y Realizar en c++
// a. Realizar un programa que pida la fecha de nacimiento y nos de la edad
#include <iostream>
using namespace std;

int main() {
//  system("cls");
 int dia,mes,anio;
 int diaActual, mesActual, anioActual;
 int edad;
   cout <<" Por favor ingrese su fecha de nacimiento:"  << endl;
   cout << "¿Que dia nacio?" << endl;
   cin >> dia;
   cin.sync();
   cout << "ingrese el mes" <<endl;
   cin >> mes;
   cin.sync();
   cout << "¿En que año nacio?" << endl;
   cin >> anio;
   cin.sync();
   cout << "Usted nacio el " <<dia<<"/"<<mes<<"/"<<anio<<endl;
// Fecha actual
   cout << "¿Que dia es hoy?" << endl;
   cin >> diaActual;
   cin.sync();
   cout << "¿En que mes estamos?" <<endl;
   cin >> mesActual;
   cin.sync();
   cout << "¿En que año estamos viviendo?" << endl;
   cin >> anioActual;
   cin.sync();
   cout << "estamos viviendo el " <<diaActual<<"/"<<mesActual<<"/"<<anioActual<<endl;
//Calculo edad
edad = anioActual - anio;
// calculo año edad pregunto si mes si mes es menor a mesActual 
//  si es cierto pregunto si dia es menor a diaActual
  if(anioActual < anio){
    cout << "¡Usted ni siquiera a nacido! debe haber algun error vuelva a empezar."<< endl;
  }else{
    if(anioActual == anio && mes == mesActual && dia == diaActual){
      cout<< "Hoy es su nacimiento!" <<endl;
    }else{
      if( mesActual < mes  ||  (mesActual == mes && diaActual < dia)){
        edad--;
      }
    }

  }
  cout<<"usted tiene "<< edad<<endl;
   return 0;
}
