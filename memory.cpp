#include <iostream>
using namespace std;

int main() {

  int myArr[4];
  
  //  DO NOT DO THIS This can cause a runtime error
  // and cause the program to crash
  myArr[50000] =10;
  
  cout << myArr[50000]<<endl;
  
  return 0;
}
