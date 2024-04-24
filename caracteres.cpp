#include <iostream>
#include <cctype>
using namespace std;
int main()
{
char caracter1 = 'A';
bool resultado;
cout << isalnum(caracter1);
cout << isalpha(caracter1);
cout << isdigit(caracter1);
cout << isalnum(caracter1);
cout << isalnum(caracter1)<<endl;
resultado = 1 > 2;
cout << resultado;
return 0;

}