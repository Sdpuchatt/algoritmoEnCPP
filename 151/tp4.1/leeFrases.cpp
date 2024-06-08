// b. Para el ejercicio anterior, Abrir el archivo y mostrar las frases x pantalla, con cada frase
// en una línea, con Interlineado.

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
ifstream archivo;
string frase;
archivo.open("frasesDeBjarme.txt");
bool archivoAbierto = true;
if(archivo.is_open()){
    while(archivoAbierto){
        getline(archivo, frase);
        if(frase != "fin"){
            cout << frase << endl;
        }
        else{
            archivoAbierto = false;
        }
    }
    archivo.close();
}

 

return 0;

}