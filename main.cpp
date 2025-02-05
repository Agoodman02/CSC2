#include "Node.hpp"
#include "LList.hpp"
#include <iostream>
#include <string>
using namespace std;


int main()
{

  Node testNode("hello");
  cout << *(testNode.ndata()) << endl;
  
  testNode.print(cout);
  cout << endl;
  
  cout << testNode << endl;
  
  
  /*LList myLinkedList;
  myLinkedList.addToFront("hello");
  
  myLinkedList.print(cout);
  */

 return 0;
}
