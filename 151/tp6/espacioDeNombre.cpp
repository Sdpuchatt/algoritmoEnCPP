#include <iostream>
using namespace std;
  namespace var1{
    int x = 150;
  }
  namespace var2{
    int x = 500;
  }

//using namespace var1;
int main()
{
    using var1::x;
    cout << x << endl;
    cout << var1::x << endl;
    cout << var2::x << endl;

return 0;

}