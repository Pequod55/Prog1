#include <iostream>
using namespace std;
int f=0;
void main(){
  for(int i=2; i<100; i++){
    for (int j=2; j<i; j++) {
      if(i%j==0){
        f=1;
        break;
      }

      }
    if (f==0){
      cout << "Found Prime " << i << endl;
    }
    if (f==1){
      //cout << "Found Non-Prime " << i << endl;
      f=0;
    }
  }
}
//Prime Number Finder
