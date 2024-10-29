/*
La pila es una estructura LIFO (Último en entrar, primero en salir), 
que tiene operaciones básicas como push y pop.
*/

#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> pila;
    pila.push(1);
    pila.push(2);
    pila.push(3);

    while (!pila.empty()) {
        cout << pila.top() << " ";
        pila.pop();
    }
    return 0;
}
