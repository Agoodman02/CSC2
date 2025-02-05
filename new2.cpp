#include <iostream>
using namespace std;

int main() {

  int*intPtr = new int;
  *intPtr = 100;
  
  // prints value
  cout<< *intPtr <<endl;
  
  // prints address
  cout<< intPtr <<endl;
  
  
  delete intPtr;
  return 0;
}
