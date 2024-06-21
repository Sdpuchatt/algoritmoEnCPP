#include <iostream>
#include <string>

using namespace std;

int contadorPalabras(string frase);

int main() {
  string frase;
  cout << "Escriba una frase: ";
  getline(cin, frase);

  int numeroPalabras = contadorPalabras(frase);
  string arrayPalabra[numeroPalabras]; 

  // Almacenar palabras en el arreglo
  string palabraAux;
  int contador = 0;
  for (int i = 0; i < frase.size(); i++) {
    if (frase[i] != ' ') {
      palabraAux += frase[i];
    } else {
      arrayPalabra[contador] = palabraAux;
      contador++;
      palabraAux.clear(); 
  }

  // Contar la última palabra si termina sin espacio
  if (frase[frase.size() - 1] != ' ') {
    arrayPalabra[contador] = palabraAux;
    contador++;
  }

  cout << endl;
  for (int i = 0; i < numeroPalabras; i++) {
    int longitudPalabra = arrayPalabra[i].length();
    cout << arrayPalabra[i] << " (" << longitudPalabra << " letras)" << endl;
  }

  return 0;
}

int contadorPalabras(string frase) {
  int contador = 0;
  bool enPalabra = false;

  for (int i = 0; i < frase.size(); i++) {
    if (frase[i] != ' ') {
      if (!enPalabra) {
        contador++;
        enPalabra = true;
      }
    } else {
      enPalabra = false;
    }
  }

  // Contar la última palabra si termina sin espacio
  if (frase[frase.size() - 1] != ' ') {
    contador++;
  }

  return contador;
}