#include <iostream>
using namespace std;
int main()

{
int longitud = 100;
typedef int miArray [longitud];
miArray arrayDeEnteros;
for(int i = 0; i < longitud; i++){
    arrayDeEnteros [i] = i+1;
}
for (int i = 0; i < longitud; i++){
    cout << arrayDeEnteros [i] << " ";
    if(i%9 == 0 && i!=0){
        cout << "\n";
    }
}


return 0;

}