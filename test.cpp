#include <iostream>
using namespace std;

int main(){
   
  for (int x = 0; x<=100;x++) {
      if (x%2) continue;
        cout << x << ' ';}
    return 0;
}