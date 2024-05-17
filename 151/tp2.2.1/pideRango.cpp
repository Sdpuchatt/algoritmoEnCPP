// 3. Realizar un programa que pida un rango, luego que ingrese un número y determine si está
// dentro del rango solicitados.

#include <iostream>
#include <cstdlib>
using namespace std;
void rangoDeNumeros(int& a, int& b);
void verificaNumero(int a, int b, int c);

int main(){
    #ifdef _WIN32
    system("chcp 65001 > nul");
    #endif

    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    int a = 0, b = 0;
    int numero = 0;

    rangoDeNumeros(a, b);
    cout << "Ingrese el numero que desea comprobar: ";
    cin >> numero;
    verificaNumero(a,b,numero);
return 0;

}

void rangoDeNumeros(int& a,int& b){
 cout << "Rango de Numeros \n";
 cout << "ingrese la cota inferior: ";
 cin >> a;
 cout << "ingrese la cota superior: ";
 cin >> b; 
}
void verificaNumero(int a, int b, int c){
    if(a <= b){
        if((c >= a) && (c <= b)){
        cout << "El numero " << c << " se encuentra entre ["<< a <<","<< b <<"]"<< endl; 
        }
        else{
        cout << "El numero " << c << " No se encuentra entre el rango " << endl;
        }
    }
    else{
        if((c <= a) && (c >= b)){
            cout << "El numero " << c << " se encuentra entre ["<< b <<","<< a <<"]"<< endl; 
        }else{
            cout << "El numero " << c << " No se encuentra entre el rango " << endl;
        }
    }
}