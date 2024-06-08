// d. Para el archivo de “frasesDeBjarme.txt” indicar cual es la palabra mas Larga.
#include <iostream>
#include <fstream>
using namespace std;
int longitudPalabraMasLarga(string frase);
int main()
{
ifstream archivo;
string frase;
int contador = 0 ,mayorLongitudPalabra = 0;

archivo.open("frasesDeBjarme.txt");
bool archivoAbierto = true;
if(archivo.is_open()){
    while(archivoAbierto){
        getline(archivo, frase);
        if(frase != "fin"){
            contador = longitudPalabraMasLarga(frase);
            if(contador>mayorLongitudPalabra){
                mayorLongitudPalabra = contador;
            }
        }
        else{
            archivoAbierto = false;
        }
    }
    archivo.close();
}
cout << "\n\tLa palabra de mayor longitud tiene "<< mayorLongitudPalabra << " letras";
 

return 0;

}

int longitudPalabraMasLarga(string frase) {
    int longitudMaxima = 0;
    int longitudActual = 0;

    for (char caracter : frase) {
        if (caracter != ' ') {
            longitudActual++;
        } else {
            longitudMaxima = max(longitudMaxima, longitudActual);
            longitudActual = 0;
        }
    }

    // Verificar si la última palabra es la más larga
    longitudMaxima = max(longitudMaxima, longitudActual);

    return longitudMaxima;
}