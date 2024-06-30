#include <iostream>
#include <fstream>
#include <sstream>

const int MAX_CUSTOMERS = 100;

// Funciones de utilidad
void pauseConsole() 
{
    std::cout << "Presione una tecla para continuar..." << std::endl;
    std::cin.ignore();
    std::cin.get();
}

void clearConsole() 
{
    #ifdef __unix__
        system("clear");
    #elif __APPLE__
        system("clear");
    #elif defined(_WIN32) || defined(WIN32) || defined(WIN64)
        system("cls");
    #endif
}

// Estructura del cliente
struct Customer 
{
    int code;
    std::string name;
    std::string surname;
    std::string address;
};

// Estructura de la base de datos de clientes
struct CustomerDatabase 
{
    Customer customers[MAX_CUSTOMERS];
    int numCustomers;
};

// Funciones para manipular clientes
void showMenu() 
{
    std::cout << "----- MENÚ -----" << std::endl;
    std::cout << "1. Dar de alta un cliente" << std::endl;
    std::cout << "2. Dar de baja un cliente" << std::endl;
    std::cout << "3. Modificar un cliente" << std::endl;
    std::cout << "4. Listar todos los clientes" << std::endl;
    std::cout << "5. Buscar un cliente por código" << std::endl;
    std::cout << "6. Salir" << std::endl;
    std::cout << "Ingrese una opción: ";
}

void create(CustomerDatabase& db) 
{
    clearConsole();
    if (db.numCustomers >= MAX_CUSTOMERS) 
    {
        std::cout << "No se pueden agregar más clientes." << std::endl;
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
    
    std::cout << "Ingrese el nombre del cliente: ";
    std::cin >> newCustomer.name;

    std::cout << "Ingrese el apellido del cliente: ";
    std::cin >> newCustomer.surname;

    std::cout << "Ingrese la dirección del cliente: ";
    std::cin.ignore();
    std::getline(std::cin, newCustomer.address);

    db.customers[db.numCustomers] = newCustomer;
    db.numCustomers++;

    std::cout << "Cliente agregado correctamente." << std::endl;
}

void remove(CustomerDatabase& db) 
{
    clearConsole();
    int code;
    std::cout << "Ingrese el código del cliente a dar de baja: ";
    std::cin >> code;

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
        std::cout << "Cliente eliminado correctamente." << std::endl;
    } 
    else 
    {
        std::cout << "Cliente no encontrado." << std::endl;
    }
    pauseConsole();
}

void update(CustomerDatabase& db) 
{
    clearConsole();
    int code;
    std::cout << "Ingrese el código del cliente a modificar: ";
    std::cin >> code;

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
        std::cout << "Cliente encontrado:" << std::endl;
        std::cout << "Código: " << db.customers[position].code << std::endl;
        std::cout << "Nombre: " << db.customers[position].name << std::endl;
        std::cout << "Apellido: " << db.customers[position].surname << std::endl;
        std::cout << "Dirección: " << db.customers[position].address << std::endl;

        std::cout << "Ingrese el nuevo nombre del cliente: ";
        std::cin >> db.customers[position].name;

        std::cout << "Ingrese el nuevo apellido del cliente: ";
        std::cin >> db.customers[position].surname;

        std::cout << "Ingrese la nueva dirección del cliente: ";
        std::cin.ignore();
        std::getline(std::cin, db.customers[position].address);

        std::cout << "Cliente modificado correctamente." << std::endl;
    } 
    else 
    {
        std::cout << "Cliente no encontrado." << std::endl;
    }
    pauseConsole();
}

void read(const CustomerDatabase& db) 
{
    clearConsole();
    
    if (db.numCustomers == 0) 
    {
        std::cout << "No hay clientes cargados." << std::endl;
        return;
    }

    for (int i = 0; i < db.numCustomers; i++) 
    {
        std::cout << "Código: " << db.customers[i].code << std::endl;
        std::cout << "Nombre: " << db.customers[i].name << std::endl;
        std::cout << "Apellido: " << db.customers[i].surname << std::endl;
        std::cout << "Dirección: " << db.customers[i].address << std::endl;
        std::cout << "-------------------" << std::endl;
    }
    pauseConsole();
}

void find(const CustomerDatabase& db) 
{
    clearConsole();
    int code;
    std::cout << "Ingrese el código del cliente a buscar: ";
    std::cin >> code;

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
        std::cout << "Cliente encontrado:" << std::endl;
        std::cout << "Código: " << db.customers[position].code << std::endl;
        std::cout << "Nombre: " << db.customers[position].name << std::endl;
        std::cout << "Apellido: " << db.customers[position].surname << std::endl;
        std::cout << "Dirección: " << db.customers[position].address << std::endl;
    } 
    else 
    {
        std::cout << "Cliente no encontrado." << std::endl;
    }
    pauseConsole();
}

void save(const CustomerDatabase& db) 
{
    clearConsole();
    std::ofstream file("customers.csv");
    if (file.is_open()) {
        for (int i = 0; i < db.numCustomers; i++) 
        {
            file << db.customers[i].code << "," << db.customers[i].name << ","
                 << db.customers[i].surname << "," << db.customers[i].address << std::endl;
        }
        file.close();
        std::cout << "Clientes guardados en el archivo customers.csv." << std::endl;
    } 
    else 
    {
        std::cout << "No se pudo abrir el archivo." << std::endl;
    }
    pauseConsole();
}

int loadCustomersFromFile(CustomerDatabase& db) 
{
    std::ifstream file("customers.csv");
    if (file.is_open()) 
    {
        std::string linea;

        while (std::getline(file, linea)) 
        {
            std::istringstream iss(linea);
            std::string field;

            std::getline(iss, field, ',');
            db.customers[db.numCustomers].code = std::stoi(field);

            std::getline(iss, field, ',');
            db.customers[db.numCustomers].name = field;
            
            std::getline(iss, field, ',');
            db.customers[db.numCustomers].surname = field;
            
            std::getline(iss, field, ',');
            db.customers[db.numCustomers].address = field;

            db.numCustomers++;
        }
        file.close();
        return db.numCustomers;
    } 
    else 
    {
        std::cout << "No se pudo abrir el archivo." << std::endl;
        return 0;
    }
}

int main() 
{
    CustomerDatabase db;
    db.numCustomers = 0; // Inicialización explícita de numCustomers
    
    db.numCustomers = loadCustomersFromFile(db);
    std::cout << "Clientes cargados: " << db.numCustomers << std::endl;
    
    int option;
    do{
        showMenu();
        std::cin >> option;

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
                std::cout << "Saliendo..." << std::endl;
                break;
            default:
                std::cout << "Opción inválida. Intente nuevamente." << std::endl;
                break;
        }

        std::cout << std::endl;
    } while (option != 6);

    return 0;
}
