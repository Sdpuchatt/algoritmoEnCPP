
rESPONDER SOBRE C++
1. Que es un Array, ¿qué tipo de Estructura Representa?
2. Explicar cuál es la función del Centinela
3. Como puedo Abrir, leer y guardar archivos, dar ejemplo.
4. ¿Qué es una Función y que rol cumple en un programa?
5. ¿Como se le recorre un arreglo secuencialmente? Que características tiene, dar ejemplos.
6. Como se realiza una búsqueda mediante “burbujeo”, dar ejemplo.
7. Como es una búsqueda “Binaria”, dar ejemplos.
8. ¿Qué es Abstracción y por qué es tan Importante?
9. ¿Qué es una Estructura y que representa a nivel de Abstracción?
10. Que tipo de problemas podemos solucionar combinado estructuras y arreglos.
11. ¿Qué es la Modularizacion y que permite?
12. ¿Qué entiende por TDA?
13. Que es Gap Semántico e Isomorfismo Estructural.


1. ¿Qué es un Array y qué tipo de estructura representa?
Un array es una estructura de datos que permite almacenar una colección de elementos del mismo tipo en posiciones contiguas de memoria. Representa una estructura de datos homogénea y estática, donde cada elemento se puede acceder mediante un índice entero.

cpp
Copiar código
int arr[5] = {1, 2, 3, 4, 5}; // Un array de enteros de tamaño 5
2. Explicar cuál es la función del Centinela
Un centinela es un valor especial utilizado para marcar el final de una estructura de datos o para simplificar el código de algoritmos. Por ejemplo, en una búsqueda lineal, se puede colocar un centinela en el array para evitar comprobar los límites del array en cada iteración.

cpp
Copiar código
int search(int arr[], int n, int x) {
    int i = 0;
    arr[n] = x; // Colocar el centinela
    while (arr[i] != x) {
        i++;
    }
    return (i < n) ? i : -1; // Verificar si se encontró antes del centinela
}
3. Cómo puedo abrir, leer y guardar archivos, dar ejemplo
En C++, se pueden manejar archivos usando las bibliotecas <fstream>, <ifstream> y <ofstream>.

cpp
Copiar código
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Abrir un archivo para escribir
    ofstream outFile("example.txt");
    outFile << "Hello, World!" << endl;
    outFile.close();
    
    // Abrir un archivo para leer
    ifstream inFile("example.txt");
    string line;
    if (inFile.is_open()) {
        while (getline(inFile, line)) {
            cout << line << endl;
        }
        inFile.close();
    } else {
        cout << "Unable to open file";
    }

    return 0;
}
4. ¿Qué es una Función y qué rol cumple en un programa?
Una función es un bloque de código que realiza una tarea específica y puede ser llamada desde otras partes del programa. Ayuda a modularizar el código, hacer más clara su estructura y permitir la reutilización del mismo.

cpp
Copiar código
int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(3, 4);
    cout << "Sum: " << result << endl;
    return 0;
}
5. ¿Cómo se recorre un arreglo secuencialmente? ¿Qué características tiene? Dar ejemplos.
Recorrer un arreglo secuencialmente significa acceder a cada elemento del arreglo uno por uno, típicamente usando un bucle for o while.

cpp
Copiar código
int arr[5] = {1, 2, 3, 4, 5};

// Usando un bucle for
for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
}

// Usando un bucle while
int i = 0;
while (i < 5) {
    cout << arr[i] << " ";
    i++;
}
6. ¿Cómo se realiza una búsqueda mediante “burbujeo”? Dar ejemplo.
La búsqueda por burbujeo no es una búsqueda, sino un algoritmo de ordenamiento conocido como "ordenamiento burbuja". Consiste en recorrer repetidamente la lista, comparando y, de ser necesario, intercambiando elementos adyacentes hasta que la lista esté ordenada.

cpp
Copiar código
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main() {
    int arr[5] = {5, 2, 9, 1, 5};
    bubbleSort(arr, 5);
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
7. ¿Cómo es una búsqueda “Binaria”? Dar ejemplos.
La búsqueda binaria es un algoritmo eficiente para encontrar un elemento en una lista ordenada. Divide repetidamente el rango de búsqueda a la mitad hasta que se encuentre el elemento o el rango de búsqueda se reduzca a cero.

cpp
Copiar código
int binarySearch(int arr[], int l, int r, int x) {
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
}

int main() {
    int arr[5] = {2, 3, 4, 10, 40};
    int x = 10;
    int result = binarySearch(arr, 0, 4, x);
    cout << "Element is at index: " << result << endl;
    return 0;
}
8. ¿Qué es Abstracción y por qué es tan importante?
La abstracción es el proceso de ocultar los detalles de implementación y mostrar solo la funcionalidad esencial de un objeto o sistema. Es importante porque ayuda a reducir la complejidad y permite a los programadores enfocarse en los aspectos más importantes del problema sin preocuparse por los detalles de bajo nivel.

9. ¿Qué es una Estructura y qué representa a nivel de Abstracción?
Una estructura en C++ (definida con struct) es una colección de variables, posiblemente de diferentes tipos, agrupadas bajo un mismo nombre. Representa una abstracción que permite modelar objetos del mundo real.

cpp
Copiar código
struct Person {
    string name;
    int age;
    float height;
};

int main() {
    Person person1;
    person1.name = "John";
    person1.age = 30;
    person1.height = 5.9;
    return 0;
}
10. ¿Qué tipo de problemas podemos solucionar combinando estructuras y arreglos?
Combinando estructuras y arreglos, podemos manejar colecciones de datos complejos. Por ejemplo, gestionar una lista de estudiantes con su información personal, notas, etc.

cpp
Copiar código
struct Student {
    string name;
    int age;
    float grade;
};

int main() {
    Student students[3] = {
        {"Alice", 20, 85.5},
        {"Bob", 21, 90.0},
        {"Charlie", 19, 72.3}
    };
    for (int i = 0; i < 3; i++) {
        cout << students[i].name << " " << students[i].age << " " << students[i].grade << endl;
    }
    return 0;
}
11. ¿Qué es la Modularización y qué permite?
La modularización es el proceso de dividir un programa en partes más pequeñas y manejables llamadas módulos. Permite mejorar la legibilidad del código, facilitar el mantenimiento y la reutilización del mismo, y simplificar la depuración.

12. ¿Qué entiende por TDA?
Un TDA (Tipo de Datos Abstracto) es una especificación matemática de un conjunto de datos y las operaciones que se pueden realizar sobre esos datos, sin especificar cómo se implementarán dichas operaciones.

13. ¿Qué es Gap Semántico e Isomorfismo Estructural?
Gap Semántico: Se refiere a la diferencia entre el problema del mundo real y su representación en un sistema de software.
Isomorfismo Estructural: Se refiere a la correspondencia uno a uno entre la estructura del modelo del software y la estructura del problema del mundo real.
Estos conceptos son importantes en la teoría de diseño de software para asegurarse de que el modelo de software represente adecuadamente el problema que se está resolviendo.