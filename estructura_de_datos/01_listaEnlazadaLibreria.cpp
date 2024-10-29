#include <iostream>
#include <list>

int main() {
    std::list<int> numeros;

    // Agregar elementos al inicio y al final
    numeros.push_back(10);
    numeros.push_front(5);
    numeros.push_back(15);

    // Insertar elemento en una posición
    auto it = numeros.begin();
    ++it; // Posicionarse en la segunda posición
    numeros.insert(it, 7); // Inserta 7 en la segunda posición

    // Mostrar los elementos
    std::cout << "Contenido de la lista: ";
    for (int num : numeros) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Eliminar un elemento específico
    numeros.remove(10);

    // Mostrar la lista después de la eliminación
    std::cout << "Contenido de la lista después de eliminar 10: ";
    for (int num : numeros) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
