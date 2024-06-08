// 1. Resolver y Realizar en c++
// a. Crea un programa que vaya leyendo las frases que el usuario teclea y las guarde en un
// fichero de texto llamado “frasesDeBjarme.txt”. Terminará cuando la frase introducida
// sea &quot;fin&quot; (esa frase no deberá guardarse en el fichero).
#include <iostream>
#include <fstream>
using namespace std;
int main()
{

ofstream archivo;
string fraseEntrada;
bool cortarBucle = false;
archivo.open("frasesDeBjarme.txt");
cout << "\n\tIngrese una frase y pulse enter para guarda la frase en base de datos. \n";
cout << "\tSi quiere terminar escriba la palabra fin \n";
if(archivo.is_open()){
    while(!cortarBucle){
        getline(cin,fraseEntrada);
        if(fraseEntrada != "fin"){
            archivo << fraseEntrada <<"\n";
        }
        else{
            cortarBucle = true;
            archivo << fraseEntrada;
        }
    }
    archivo.close();
}
else{
    cout << "Error: El archivo no puede ser leido.";
}


return 0;

}

