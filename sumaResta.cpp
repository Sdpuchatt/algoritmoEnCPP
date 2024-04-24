#include <iostream>

using namespace std;

int main()
{
int opcion = 0;
double num1 = 0, num2 = 0, resultado = 0;
cout << "Elige una Opcion" << endl;
cout << "1 - Sumar" << endl; 
cout << "2 - Restar" << endl;
cin >> opcion; 
if(opcion == 1){
    cout << "Vamos a sumar!"<< endl;
    cout << "ingrese el primer valor:";
    cin >> num1;
    cout << "ingrese el segundo valor:";
    cin >> num2;
    resultado = num1 + num2;
    cout << "El resultado de sumar "<< num1 << " + "<< num2 << " = "<< resultado << endl;
}
else{
    cout << "Vamos a restar!"<< endl;
    cout << "ingrese el primer valor:";
    cin >> num1;
    cout << "ingrese el segundo valor:";
    cin >> num2;
    resultado = num1 - num2;
    cout << "El resultado de sumar "<< num1 << " - "<< num2 << " = "<< resultado << endl;
}

return 0;

}