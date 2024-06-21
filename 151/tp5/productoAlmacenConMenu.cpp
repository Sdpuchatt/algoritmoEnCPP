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

void mostrarMenu();

int main() {
    int opcion;
    bool continuar = true;
    cargaDatos();

    while (continuar) {
        mostrarMenu();
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                imprimeListaProductos();
                break;
            case 2: {
                tProducto productoMaximo = productoMaximoValor();
                cout << "**********Producto Maximo**********" << endl;
                imprimeProducto(productoMaximo);
                cout << "***********************************" << endl;
                break;
            }
            case 3: {
                tProducto nuevoProducto;
                cout << "Ingrese el ID del producto: ";
                cin >> nuevoProducto.id;
                cout << "Ingrese el precio del producto: ";
                cin >> nuevoProducto.precio;
                cout << "Ingrese las unidades del producto: ";
                cin >> nuevoProducto.unidades;
                agregarProducto(nuevoProducto);
                break;
            }
            case 4: {
                int id;
                cout << "Ingrese el ID del producto a borrar: ";
                cin >> id;
                borrarProducto(id);
                break;
            }
            case 0:
                continuar = false;
                break;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
        }
    }

    return 0;
}

void mostrarMenu() {
    cout << "\n********** Menu **********" << endl;
    cout << "1. Imprimir lista de productos" << endl;
    cout << "2. Mostrar producto de mayor valor" << endl;
    cout << "3. Agregar un producto" << endl;
    cout << "4. Borrar un producto" << endl;
    cout << "0. Salir" << endl;
    cout << "**************************\n" << endl;
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
    } else {
        cout << "No se puede agregar más productos, la lista está llena." << endl;
    }
}
