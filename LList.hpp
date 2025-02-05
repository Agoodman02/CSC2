#ifndef _LLIST_HPP_
#define _LLIST_HPP_

#include "Node.hpp"
#include <iostream>
#include <string>
using namespace std;

class LList 
{
  private:
    Node* _head;
    
  public:
    LList(): _head(nullptr){}
    
  //Accessor + Modifier
  Node* head()const {return _head;}
  Node* &head(){return _head;}
  
  void addToFront(const string &newVal);
  
  void removeVal(const string &valToRemove);
  
  Node* findNode(const string &valToFind) const;
  
  ostream& print(ostream &os) const;
  
};



#endif
