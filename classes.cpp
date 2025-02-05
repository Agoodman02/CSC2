#include <iostream>
#include <fstream>
using namespace std;

class Coordinate {
  public: 
  int x;
  int y;
  
  Coordinate(){}
  
  Coordinate(int a, int b){
    x=a;
    y=b;
    }
  
  void printCoordMethod(){};

};


void Coordinate::printCoordMethod(){
  cout<<"("<<x<<","<<y<<")"<<endl;
  return;
}

void printCoordFnct(Coordinate p){
  cout<<"("<<p.x<<","<<p.y<<")"<<endl;
  return;
}

void transform(Coorinate &p,int xOffset, int yOffset){
  p.x += xOffset;
  p.y += yOffset;
  return;
}

int main() {
  Coordinate Coord1 = Coordinate(7,8);
  Coordinate Coord2=Coordinate();
  
  printCoordFnct(Coord1);
  
  transform(Coord1,2,2);
  
  printCoordFnct(Coord1);

  return 0;
}
