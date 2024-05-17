// a. Realice un programa que lea de la entrada estándar los siguientes datos de
// una persona: Edad: dato de tipo entero. Sexo: dato de tipo carácter. Altura en
// metros: dato de tipo real. Tras leer los datos, el programa debe mostrarlos en
// la salida estándar.
#include <iostream>
using namespace std;

void datoPersona(void);
void notaPromedioFinal(void);
void perimetro(void);
void calculoFunciones(void);
void calculoFuncionLineal(void);

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
        cout << "\n\t 1. Ingresar e imprimir datos de personas." << endl;
        cout << "\t 2. El promedio de notas." << endl;
        cout << "\t 3. El perimetro de figuras." << endl;
        cout << "\t 4. Calculo de funciones." << endl;
        cout << "\t 5. El calculo de una funcion lineal." << endl;
        cout << "\t 0. SALIR" << endl;

        cout << "\n\t Ingrese una opcion: ";
        cin >> opcion;

        switch(opcion){
            case 1:
                // cout <<"\t Empecemos a sumar... \n\n "<<endl;
                datoPersona();
                break;
            case 2:
                void notaPromedioFinal(void);

                break;
            case 3:
                void perimetro(void);
                break;
            case 4:
                void calculoFunciones(void);
                break;
            case 5:
                void calculoFuncionLineal(void);
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

