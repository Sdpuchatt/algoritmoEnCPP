// 2. Crear un programa que sume, reste, multiplica y divida.
#include <iostream>
#include <cstdlib> // Para usar system()
using namespace std;

void suma(void);
void resta(void);
void multiplicacion(void);
void division(void);

int main()
{
    #ifdef _WIN32
    system("chcp 65001 > nul");
    #endif

    int opcion = 0;
    bool repetir = true;
   

    do{
       // Limpiar la consola
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif

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
                // cout <<"\t Empecemos a sumar... \n\n "<<endl;
                suma();
                break;
            case 2:
                cout <<"\t Resta";
                resta();
                break;
            case 3:
                cout <<"\t Multiplicación ";
                multiplicacion();
                break;
            case 4:
                cout <<"\t División"<<endl;
                division();
                break;
            case 0: 
                repetir = false;
                break;
        }
        
        // Pausar para mostrar resultados antes de volver al menú
        if (opcion != 0) {
            cout << "\n\t Presione Enter para continuar...";
            cin.ignore(); // Ignorar el salto de línea anterior
            cin.get();    // Esperar a que el usuario presione Enter
        }
    }while(repetir); 

return 0;

}

void suma(){
    double a = 0, b = 0;
    cout<< "\t Ingrese el primer valor: ";
    cin >> a;
    cout<< "\t Ingrese el segundo valor: ";
    cin >> b;
    cout << "\n";
    cout<< "\t La suma de "<<a<< " + "<<b<<" = " <<a + b << "\n";
}
void resta(){
    double a = 0, b = 0;
    cout<< "\t Ingrese el primer valor: " ;
    cin >> a;
    cout<< "\t Ingrese el segundo valor: ";
    cin >> b;
    cout << "\n";
    cout << "\t La resta de "<<a<< " - "<<b<<" = " <<a - b << "\n";
}
void multiplicacion(){
    double a = 0, b = 0;
    cout<< "\t Ingrese el primer valor: ";
    cin >> a;
    cout<< "\t Ingrese el segundo valor: ";
    cin >> b;
    cout << "\n";
    cout<< "\t La Multiplicación de "<<a<< " * "<<b<<" = " <<a * b << "\n";
}
void division(){
    double a = 0, b = 0;
    cout<< "\t Ingrese el primer valor: ";
    cin >> a;
    cout<< "\t Ingrese el segundo valor siendo b=!0 ";
    cin >> b;
    cout << "\n";
    if(b!=0){
        cout<< "\t La división de "<<a<< " / "<<b<<" = " <<a / b << "\n";
    }
    else{
        cout<< "\t No se puede dividir por cero";
    }
}