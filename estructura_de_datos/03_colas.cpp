/*
Colas
Las colas siguen el principio FIFO
(Primero en entrar, primero en salir),
usando enqueue y dequeue para insertar y remover elementos.
*/

#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> cola;
    cola.push(1);
    cola.push(2);
    cola.push(3);

    while (!cola.empty()) {
        cout << cola.front() << " ";
        cola.pop();
    }
    return 0;
}
