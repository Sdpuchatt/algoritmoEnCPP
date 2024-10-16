#include <iostream>
using namespace std;
//using namespace var1;
int main()
{
int num = 5;
int *puntero;

puntero = &num;
cout << *puntero << endl;
(*puntero)++;
cout << *puntero << endl;


int dias[12]={31,28,31,30,31,30,31,31,30,31,30,31};
cout << *(dias+1)<< endl;
return 0;

}