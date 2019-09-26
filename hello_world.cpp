#include <iostream>
using namespace std;
int x;
void main()
{
    x=1;
    cout << "Hello, world!" << endl;
    for(int i=1; i<100; i++){
      cout << "Value of variable is ; " << x << endl;
      x=x+1;
    }
}
