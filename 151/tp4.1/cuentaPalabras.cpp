// Para el Archivo del ejercicio (a) contar la cantidad de palabras que hay x línea, luego
// mostrar la cantidad total y el promedio de palabras x línea.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
int fraseConMasPalabras = 0;
ifstream archivo;
string frase;
archivo.open("frasesDeBjarme.txt");
bool archivoAbierto = true;
int contadorPalabra = 0; 
int contadorFrase = -1; 
if(archivo.is_open()){
    while(archivoAbierto){
        getline(archivo, frase);
        if(frase != "fin"){
            contadorFrase++;
            for(int i = 0; i < frase.length(); i++){
                if(frase[i] == ' '){
                    contadorPalabra ++;
                }
            }
            contadorPalabra ++;
        }
        else{
            archivoAbierto = false;
        }
    }
    contadorPalabra--;
    archivo.close();
    cout << "\n\tEl archivo tiene " << contadorPalabra << " palabras y "<<contadorFrase<< " frases."<< endl;
    cout << "\tEl promedio de palabras por frase es de " << (contadorPalabra/contadorFrase) << " palabras.\n";

}
else{
    cout << "El archivo no se pudo leer";
}

return 0;

}