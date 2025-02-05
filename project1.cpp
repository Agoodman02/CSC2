#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void printGrid(char grid[200][200]){
for (int i= 0;i<200;i++){
  for(int j= 0;j<200;j++){
    if (grid[i][j]!=0)
      cout<<grid[i][j]<< ' ';
    }
    cout << endl;
  }
  return;
}

/*
bool isValid(char grid[200][200], int row, int col, int num){
  for (int j = 0; j < 200. j++)
    if (grid[row][j] == num)
      return false;
  for( int i = 0; i < 200; i++)
    if(grid[i][col] == num)
      return false;
      
  return true;

}


bool solver(char grid[200][200], int row, int col) {
  
  

}
*/

int main() {
  char grid[200][200];
  
    //string fileName;
    //ifstream fin ( cin >> fileName);
    ifstream fin ("input1.txt");
    
  for(int i=0;i<200;i++){
    for(int j=0;j<200;j++){
    fin >> grid[i][j];
    }
  }
  
  fin.close();
  
  /*
  if(solver(grid,0,0))
    printgrid(grid);
  else {
    cout << "No solution"<< endl;
    printGrid(grid);
    }
  */
  
  printGrid(grid);
  

return 0;
}

