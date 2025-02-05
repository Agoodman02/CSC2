#include <iostream>
using namespace std;


class Coordinate {
  private: 
    int x;
    int y;
    
  public:
    Coordinate() {}
    Coordinate( int a, int b) {x = a; y = b;}
    friend void printCoordStandaloneFunction(const Coordinate& p);
    
    int& x_val(){return x;} 
    
    Coordinate& scale(const int val);
};

Coordinate& Coordinate::scale(const int val){
  x= x*val;
  y=y*val;
  
  return*this;
}

void printCoordStandaloneFunction(const Coordinate& p) {
  cout << "(" << p.x << "," << p.y << ")" << endl;
  return;
}


int main() {
/*
  Coordinate a = Coordinate (2,3);

  printCoordStandaloneFunction(a);

  cout << a.x_val() << endl;
  a.x_val() = 6;
  cout << a.x_val() << endl;
  
  Coordinate* coordPtr= new Coordinate(5,6);
  
  cout << (*coordPtr).x_val() <<endl;
  // or
  cout << coordPtr->x_val()<<endl;
  */
  
  Coordinate.coord1 = Coordinate(7,8);
  coord1.printCoordStandaloneFunction();
  
  coord1.scale(10).scale(2).scale(2);
  
  coord1.printCoordStandaloneFunction();

  return 0;
}
