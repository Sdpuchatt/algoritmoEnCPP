#include <iostream>
using namespace std;

int const MAX = 100;

typedef struct {
    string name;
    string surname;
    string position;
    int code;
} tEmployee;

typedef struct{
    int count;
    tEmployee employee;
}tContainer;

tContainer container[MAX];


void fillEmployee();
void showEmployee();


int main()
{
    fillEmployee();
    showEmployee();

    return 0;
}

void fillEmployee()
{
    char x;

    for(int i = 0; i < MAX; i++)
    {

        cout << "Ingrese el nombre del empleado ('X' para salir): ";
        getline(cin, container[i].employee.name);
        if(container[i].employee.name == "X")
        {
            break;
        }
        cout << "Ingrese el apellido del empleado: ";
        getline(cin, container[i].employee.surname);
        cout << "Ingrese la posicion del empleado: ";
        getline(cin, container[i].employee.position);
        cout << "Ingrese el codigo del empleado: ";
        cin >> container[i].employee.code;
        cin.sync();

        container[i].count++;
    }
}

void showEmployee()
{
    cout << "Lista de empleados: " << endl;

    for(int i = 0; i < container[i].count; i++)
    {
        cout << "Nombre: " << container[i].employee.name << endl;
        cout << "Apellido: " << container[i].employee.surname << endl;
        cout << "Posicion: " << container[i].employee.position << endl;
        cout << "Codigo: " << container[i].employee.code << endl;
        cout << endl;
    }
}