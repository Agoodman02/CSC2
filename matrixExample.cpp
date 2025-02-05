#include <iostream>
#include <fstream>
using namespace std;

void printGrid(int num_rows, int num_cols, int**grid) {
  
    for(int i=0; i < num_rows; i++)
      {
      for(int j=0; j < num_cols; j++) 
        {
         cout << grid [i][j] << " ";
        }
        cout << endl;
      }
  return;
}

int main(int argc, char*argv[]) {

  string fileName = argv[1];
  //cin >> fileName;
  ifstream fin(fileName);
    int num_rows=0;
    int num_cols=0;
    
    fin >> num_rows;
    fin >> num_cols;
    
   // int grid[num_rows][num_cols];
   int**grid = new int*[num_rows];
   for(int i = 0; i<num_rows; i++) 
   {
    grid[i] = new int[num_cols];
   }
    
    for(int i=0; i < num_rows; i++)
      {
      for(int j=0; j < num_cols; j++) 
        {
        fin >> grid[i][j];
        }
      }
      
  printGrid(num_rows, num_cols, grid);
      

return 0;
}
