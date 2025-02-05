#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char*argv[]){

cout<<"Number of arguments: "<<argc<<endl;

for(int i=0; i<argc; i++)
  {
  cout<<"Arg" << i<< "is: " << argv[i]<<endl;
  }

return 0;
}
