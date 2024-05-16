// 2. Crear un programa que sume, reste, multiplica y divida.
#include <iostream>
using namespace std;

void suma(void);
void resta(void);
void multiplicacion(void);
void division(void);

int main()
{

    int opcion = 0;
    bool repetir = true;
   

    do{
       
        cout << "\n\n\t\t\tMENU PRINCIPAL" << endl;
        cout << "\t\t\t--------------" << endl;
        cout << "\n\t 1. Suma" << endl;
        cout << "\t 2. Resta" << endl;
        cout << "\t 3. Multiplicación" << endl;
        cout << "\t 4. División" << endl;
        cout << "\t 0. SALIR" << endl;

        cout << "\n\t Ingrese una opcion: ";
        cin >> opcion;

        switch(opcion){
            case 1:
                cout <<"\t Empecemos a sumar... \n\n "<<endl;
                suma();
                break;
            case 2:
                cout <<"\t Resta"<<endl;
                resta();
            case 3:
                cout <<"\t Multiplicación "<<endl;
                multiplicacion();
                break;
            case 4:
                cout <<"\t División"<<endl;
                division();
            case 0: 
                repetir = false;
                break;
        }
    }while(repetir); 

return 0;

}

void suma(){
    double a = 0, b = 0;
    cout<< "\t Ingrese el primer valor: " << endl;
    cin >> a;
    cout<< "\t Ingrese el segundo valor: " << endl;
    cin >> b;
    cout<< "\t La suma de "<<a<< " + "<<b<<" = " <<a+b;
}
void resta(){

}
void multiplicacion(){

}
void division(){
    
}