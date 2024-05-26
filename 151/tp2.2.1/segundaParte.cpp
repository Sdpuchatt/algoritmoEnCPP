

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
        cout << "\t 0. SALIR" << endl;

        cout << "\n\t Ingrese una opcion: ";
        cin >> opcion;

        switch(opcion){
            case 1:
                // cout <<"\t Empecemos a sumar... \n\n "<<endl;
                datoPersona();
                break;
            case 2:
                notaPromedioFinal();

                break;
            case 3:
                perimetro();
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
// a. Realice un programa que lea de la entrada estándar los siguientes datos de
// una persona: Edad: dato de tipo entero. Sexo: dato de tipo carácter. Altura en
// metros: dato de tipo real. Tras leer los datos, el programa debe mostrarlos en
// la salida estándar.

void datoPersona(){
    int edad = 0;
    char sexo = 'x';
    double altura = 0.0;
    cout << "A continuación debera ingresar algunos datos personales: " << endl;
    cout << "¿Que edad tiene? ";
    cin >> edad ;
    cout << "¿Con qué género se autopercibe? Indique: \n'M' para masculino \n'F' para femenino  \n'X' para no binario ";
    cin >> sexo ;
    cout << "¿Cual es su altura? ";
    cin >> altura;

    cout << "Datos personales: " << edad << " , " << sexo << " , " << altura;

}
// La Nota final de un estudiante es el promedio de tres notas: la nota de
// laboratorio que cuenta un 30% del total, la nota teórica que cuenta un 60% y
// la nota de Práctica que cuenta el 10% restante. Escriba un programa que lea
// de la entrada estándar las tres notas de un alumno y escriba en la salida
// estándar su nota final.

void notaPromedioFinal(void){
    double notaLaboratorio = 0;
    double notaTeorica = 0;
    double notaPractica = 0;

    cout << "Ingrese la nota de laboratorio: ";
    cin >> notaLaboratorio;
    cout <<"Ingrese la nota de teorica: ";
    cin >> notaTeorica;
    cout <<"Ingrese la nota de Practica: ";
    cin >> notaPractica;
    double resultado = (notaLaboratorio*0.6) + (notaTeorica*0.3) + (notaPractica*0.1);
    cout << "Su nota general es: " << resultado;
}

// c. Realizar un programa que pida los datos necesarios y Calcule los Perímetros:
// Podes hardcodearlo (poner los valores vos) o pedir por consola
void perimetro(){

    cout << "El perimetro de un cuadrado de lado 4 metros es: "<< 4*4 << " metros. " << endl;
    cout << "El perimetro de un rectangulo longitud 5 y lado 4 es: "<< 2*5 + 2*4 << " metros. "<< endl;
    cout << "El perimetro de un de un triangulo  a:2 , b:3 y c:5 es: " << 2+3+5 << " metros. "<< endl;
   
}

