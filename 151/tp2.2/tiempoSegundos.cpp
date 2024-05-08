// g. Escribe un programa que lea del teclado un tiempo transcurrido en segundos
// y muestre en la pantalla las horas, los minutos y los segundos equivalentes.

#include <iostream>
using namespace std;

int main() // main() es donde empieza la ejecución
{
   int segundos = 0;
   cout << "ingrese una cantidad de segundos para saber las horas, minutos y segundos que contiene"<<endl;
   cin >> segundos;
   int horas = segundos/3600;
   int segundos2 = segundos%3600;
   int minutos = segundos2/60;
   segundos2 = segundos2%60;
   cout << horas <<":"<< minutos <<":"<< segundos2;
   return 0;
}
