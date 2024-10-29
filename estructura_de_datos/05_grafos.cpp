/*
Un grafo se compone de vértices y aristas, 
pudiendo representarse mediante listas de adyacencia.
*/

#include <iostream>
#include <vector>
using namespace std;

void agregarArista(vector<int> grafo[], int u, int v) {
    grafo[u].push_back(v);
    grafo[v].push_back(u);
}

void mostrarGrafo(vector<int> grafo[], int vertices) {
    for (int i = 0; i < vertices; i++) {
        cout << i << " -> ";
        for (int v : grafo[i]) cout << v << " ";
        cout << endl;
    }
}

int main() {
    int vertices = 5;
    vector<int> grafo[vertices];
    agregarArista(grafo, 0, 1);
    agregarArista(grafo, 1, 2);
    mostrarGrafo(grafo, vertices);
    return 0;
}
