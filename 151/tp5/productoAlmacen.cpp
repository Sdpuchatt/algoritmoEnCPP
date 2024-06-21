#include <iostream>
#include <fstream>
using namespace std;

typedef struct {
    int id;
    double precio;
    int unidades;
} tProducto;

const int productoMAX = 50;
tProducto listaProductos[productoMAX];
int contadorProducto = 0;

void cargaDatos();
void imprimeListaProductos();
void imprimeProducto(tProducto item);
void borrarProducto(int id);
tProducto productoMaximoValor();
void agregarProducto(tProducto producto);
void guardarListaProductos();


int main() {
    int opcion;
    bool continuar = true;
    int id;
    cargaDatos();

    tProducto productoMaximo = productoMaximoValor();
    cout << "**********Producto Maximo**********" << endl;
    imprimeProducto(productoMaximo);
    cout << "***********************************" << endl;
  
    cout << "Ingrese el ID del producto a borrar: ";
    cin >> id;
    borrarProducto(id);

    tProducto producto = {contadorProducto+1,3499.50,20};
    agregarProducto(producto); 

    return 0;
}


tProducto productoMaximoValor() {
    tProducto maxProducto = {0, 0, 0};
    for (int i = 0; i < contadorProducto; i++) {
        if (listaProductos[i].precio * listaProductos[i].unidades > maxProducto.precio * maxProducto.unidades) {
            maxProducto = listaProductos[i];
        }
    }
    return maxProducto;
}

void cargaDatos() {
    ifstream archivo;
    archivo.open("db.txt");

    if (archivo.is_open()) {
        int id;
        double precio;
        int unidades;

        while (archivo >> id >> precio >> unidades) {
            if (id != -1 && contadorProducto < productoMAX) {
                listaProductos[contadorProducto++] = { id, precio, unidades };
            } else {
                break;
            }
        }
        archivo.close();
    }
}

void imprimeListaProductos() {
    for (int i = 0; i < contadorProducto; i++) {
        cout << listaProductos[i].id << " " << listaProductos[i].precio << " " << listaProductos[i].unidades << endl;
    }
}

void imprimeProducto(tProducto item) {
    cout << item.id << " " << item.precio << " " << item.unidades << endl;
}

void borrarProducto(int id) {
    for (int i = 0; i < contadorProducto; i++) {
        if (listaProductos[i].id == id) {
            cout << "Se borró correctamente el producto: " << listaProductos[i].id << endl;
            // Mover los elementos restantes hacia adelante
            for (int j = i; j < contadorProducto - 1; j++) {
                listaProductos[j] = listaProductos[j + 1];
            }
            contadorProducto--;
            return;
        }
    }
    cout << "Producto no encontrado." << endl;
}

void agregarProducto(tProducto producto) {
    if (contadorProducto < productoMAX) {
        listaProductos[contadorProducto++] = producto;
        cout << "Producto agregado correctamente." << endl;
        guardarListaProductos();
    } else {
        cout << "No se puede agregar más productos, la lista está llena." << endl;
    }
}

void guardarListaProductos() {
  ofstream archivo("db.txt");

  if (archivo.is_open()) {
    for (int i = 0; i < contadorProducto; i++) {
      archivo << listaProductos[i].id << " " << listaProductos[i].precio << " " << listaProductos[i].unidades << endl;
    }
    archivo.close();
    cout << "Lista de productos guardada." << endl;
  } else {
    cout << "Error al abrir el archivo. "<< endl;
  }
}