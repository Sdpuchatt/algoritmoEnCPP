// e. Modifica el programa anterior para que use tres variables, todas de tipo
// double: radio, altura y volumen. Las dos primeras se inicializarán a 14,5 y
// 26,79 respectivamente. La tercera obtendrá el resultado de la fórmula.
#include <iostream>
using namespace std;

int main() // main() es donde empieza la ejecución
{
   double radio = 14.5 , altura = 26.79, pi = 3.141592;
   double resultado = (radio*altura*pi)/3;

   cout << "El volumen de un cono con radio: 14,5 y altura: 26,79 es " << resultado<< "mts cubicos"<< endl;
   return 0;
}


// g. Escribe un programa que lea del teclado un tiempo transcurrido en segundos
// y muestre en la pantalla las horas, los minutos y los segundos equivalentes.