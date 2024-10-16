#include <iostream>
using namespace std;
int main()

{

int matriz[8] {2,4,8,16,32,64,128,256};
cout << matriz << endl;
int i = 0;
while(i<8){
    cout << matriz[i] << endl;
    i++;
}

const int MAX{5};
int mi_matriz[MAX]{100};
i = 0;
while(i<5){
    cout << mi_matriz[i] << endl;
    i++;
}
cout << "Operador ternario" << ((1>0) ? " Es positivo" : " Es negativo");
return 0;
}