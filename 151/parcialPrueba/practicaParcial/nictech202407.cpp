#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

const int MAX_CUSTOMERS = 100;

// Estructura del cliente
struct Customer 
{
    int code;
    string name;
    string surname;
    string address;
};

// Estructura de la base de datos de clientes
struct CustomerDatabase 
{
    Customer customers[MAX_CUSTOMERS];
    int numCustomers;
};

void pauseConsole();
void clearConsole();
void showMenu();
void create(CustomerDatabase &db);
void remove(CustomerDatabase &db);
void update(CustomerDatabase &db);
void read(const CustomerDatabase &db);
void find(const CustomerDatabase &db);
void save(const CustomerDatabase &db);
int loadCustomersFromFile(CustomerDatabase &db);
// Funciones para manipular clientes


int main() 
{
    CustomerDatabase db;
    db.numCustomers = 0; // Inicialización explícita de numCustomers
    
    db.numCustomers = loadCustomersFromFile(db);
    cout << "Clientes cargados: " << db.numCustomers << endl;
    
    int option;
    do{
        showMenu();
        cin >> option;

        switch (option) 
        {
            case 1:
                create(db);
                clearConsole();
                break;
            case 2:
                remove(db);
                break;
            case 3:
                update(db);
                break;
            case 4:
                read(db);
                break;
            case 5:
                find(db);
                break;
            case 6:
                save(db);
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
                break;
        }

        cout << endl;
    } while (option != 6);

    return 0;
}

void pauseConsole()
{
    cout << "Presione Enter para continuar..." << endl;
    cin.ignore();
    cin.get();
}

void clearConsole()
{
    #ifdef __unix__
        system("clear");
    #elif __APPLE__
        system("clear");
    #elif defined(_WIN32) || defined(WIN32) || defined(WIN64)
        system("cls");
    #endif // defined
}
void showMenu() 
{
    cout << "----- MENU -----" << endl;
    cout << "1. Dar de alta un cliente" << endl;
    cout << "2. Dar de baja un cliente" << endl;
    cout << "3. Modificar un cliente" << endl;
    cout << "4. Listar todos los clientes" << endl;
    cout << "5. Buscar un cliente por codigo" << endl;
    cout << "6. Salir" << endl;
    cout << "Ingrese una opcion: ";
}

void create(CustomerDatabase &db) 
{
    clearConsole();
    if (db.numCustomers >= MAX_CUSTOMERS) 
    {
        cout << "No se pueden agregar mas clientes." << endl;
        return;
    }

    Customer newCustomer;
    
    if (db.numCustomers > 0) 
    {
        newCustomer.code = db.customers[db.numCustomers - 1].code + 1;
    } else 
    {
        newCustomer.code = 100; // Comienza en 100 si es el primer cliente
    }
    
    cout << "Ingrese el nombre del cliente: ";
    cin >> newCustomer.name;

    cout << "Ingrese el apellido del cliente: ";
    cin >> newCustomer.surname;

    cout << "Ingrese la direccion del cliente: ";
    cin.ignore();
    getline(cin, newCustomer.address);

    db.customers[db.numCustomers] = newCustomer;
    db.numCustomers++;

    cout << "Cliente agregado correctamente." << endl;
}

void remove(CustomerDatabase &db) 
{
    clearConsole();
    int code;
    cout << "Ingrese el codigo del cliente a dar de baja: ";
    cin >> code;

    int position = -1;
    for (int i = 0; i < db.numCustomers; i++) 
    {
        if (db.customers[i].code == code) 
        {
            position = i;
            break;
        }
    }

    if (position != -1) 
    {
        for (int i = position; i < db.numCustomers - 1; i++) 
        {
            db.customers[i] = db.customers[i + 1];
        }
        db.numCustomers--;
        cout << "Cliente eliminado correctamente." << endl;
    } 
    else 
    {
        cout << "Cliente no encontrado." << endl;
    }
    pauseConsole();
}
void update(CustomerDatabase &db) 
{
    clearConsole();
    int code;
    cout << "Ingrese el código del cliente a modificar: ";
    cin >> code;

    int position = -1;
    for (int i = 0; i < db.numCustomers; i++) 
    {
        if (db.customers[i].code == code) 
        {
            position = i;
            break;
        }
    }

    if (position != -1) 
    {
        cout << "Cliente encontrado:" << endl;
        cout << "Codigo: " << db.customers[position].code << endl;
        cout << "Nombre: " << db.customers[position].name << endl;
        cout << "Apellido: " << db.customers[position].surname << endl;
        cout << "Direccion: " << db.customers[position].address << endl;

        cout << "Ingrese el nuevo nombre del cliente: ";
        cin >> db.customers[position].name;

        cout << "Ingrese el nuevo apellido del cliente: ";
        cin >> db.customers[position].surname;

        cout << "Ingrese la nueva dirección del cliente: ";
        cin.ignore();
        getline(cin, db.customers[position].address);

        cout << "Cliente modificado correctamente." << endl;
    } 
    else 
    {
        cout << "Cliente no encontrado." << endl;
    }
    pauseConsole();
}

void read(const CustomerDatabase &db) 
{
    clearConsole();
    
    if (db.numCustomers == 0) 
    {
        cout << "No hay clientes cargados." << endl;
        return;
    }

    for (int i = 0; i < db.numCustomers; i++) 
    {
        cout << "Codigo: " << db.customers[i].code << endl;
        cout << "Nombre: " << db.customers[i].name << endl;
        cout << "Apellido: " << db.customers[i].surname << endl;
        cout << "Direccion: " << db.customers[i].address << endl;
        cout << "-------------------" << endl;
    }
    pauseConsole();
}

void find(const CustomerDatabase &db) 
{
    clearConsole();
    int code;
    cout << "Ingrese el codigo del cliente a buscar: ";
    cin >> code;

    int position = -1;
    for (int i = 0; i < db.numCustomers; i++) 
    {
        if (db.customers[i].code == code) 
        {
            position = i;
            break;
        }
    }

    if (position != -1) 
    {
        cout << "Cliente encontrado:" << endl;
        cout << "Codigo: " << db.customers[position].code << endl;
        cout << "Nombre: " << db.customers[position].name << endl;
        cout << "Apellido: " << db.customers[position].surname << endl;
        cout << "Direccion: " << db.customers[position].address << endl;
    } 
    else 
    {
        cout << "Cliente no encontrado." << endl;
    }
    pauseConsole();
}

void save(const CustomerDatabase &db) 
{
    clearConsole();
    ofstream file("cliente.txt");
    if (file.is_open()) {
        for (int i = 0; i < db.numCustomers; i++) 
        {
            file << db.customers[i].code << "," << db.customers[i].name << ","
                 << db.customers[i].surname << "," << db.customers[i].address << endl;
        }
        file.close();
        cout << "Clientes guardados en el archivo cliente.txt" << endl;
    } 
    else 
    {
        cout << "No se pudo abrir el archivo." << endl;
    }
    pauseConsole();
}

int loadCustomersFromFile(CustomerDatabase &db) 
{
    ifstream file("cliente.txt");
    if (file.is_open()) 
    {
        string linea;

        while (getline(file, linea)) 
        {
            // Busca las posiciones de las comas
            int pos1 = linea.find(',');
            int pos2 = linea.find(',', pos1 + 1);
            int pos3 = linea.find(',', pos2 + 1);

            // Extrae los campos
            string codeStr = linea.substr(0, pos1);
            string name = linea.substr(pos1 + 1, pos2 - pos1 - 1);
            string surname = linea.substr(pos2 + 1, pos3 - pos2 - 1);
            string address = linea.substr(pos3 + 1);

            // Convierte el código a entero
            int code = stoi(codeStr);

            // Almacena los datos en la base de datos
            db.customers[db.numCustomers].code = code;
            db.customers[db.numCustomers].name = name;
            db.customers[db.numCustomers].surname = surname;
            db.customers[db.numCustomers].address = address;

            db.numCustomers++;
        }
        file.close();
        return db.numCustomers;
    } 
    else 
    {
        cout << "No se pudo abrir el archivo." << endl;
        return 0;
    }
}
