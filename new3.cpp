#include <iostream>
using namespace std;

int main(){

  int**grid = new int*[3];
  
  // creating a 3x4 grid/matrix
  for(int i=0;i<3;i++)
  {
    grid[i] = new int[4];
  }
  
  
   for(int i=0;i<3;i++)
  {
    delete[] grid[i];
  }

  
delete[] grid;
return 0;
}
