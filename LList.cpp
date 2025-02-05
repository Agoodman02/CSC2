#include "LList.hpp"
#include "Node.hpp"
using namespace std;


void LList::addToFront(const string &newVal)
{
  Node* newNode = new Node(newVal);
  newNode->next()  =_head;
  _head = newNode;
  return;
}

 Node* LList::findNode(const string &valToFind) const
 {
  Node* curr = _head;
  while(curr != nullptr) 
  {
    if (*(curr->ndata()) == valToFind)
    return curr;
    curr = curr -> next();
  }
  return nullptr;
 }
 
void LList::removeVal(const string &valToRemove) 
{
  // Find node that needs to be removed
  Node* nodeToRemove = findNode(valToRemove);
  
  if(nodeToRemove == nullptr)
  {
    return;
  }
  
  if(*(_head -> ndata()) == valToRemove)
  {
    _head = _head -> next();
    return;
  }
  
  Node* prev = _head;
  while (prev != nullptr && *(prev->next()->ndata() != valToRemove))
  {
    prev = prev-> next();
  }
  prev -> next() = prev -> next() -> next();
// OR
// prev -> next() = nodeToRemove -> next();
    
  // free mem
  
  
  return;
}

ostream& LList::print(ostream &os) const
{
  Node* curr = _head;
  while(curr!= nullptr) 
  {
    os << *curr << endl;
    curr = curr -> next();
  }
  return os;
}


  
