#include <iostream>
using namespace std;
void pauseConsole();
void clearConsole();
int main()

{

cout << "base" << endl; 
pauseConsole();

clearConsole();
cout << "cargando archivos" << endl;
clearConsole();
return 0;

}

void pauseConsole()
{
    cout << "Presione una tecla para continuar..." << endl;
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