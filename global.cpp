#include <iostream>
using namespace std;

int myVar;

void myFnct(){
  myVar=1000;
  cout<<myVar<<endl;
return;
}

int main(){

  myVar=7;
  cout<<myVar<<endl;

myFnct();

cout<<myVar<<endl;

return 0;
}
