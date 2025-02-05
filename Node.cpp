#include "Node.hpp"
#include <iostream>
#include <string>
using namespace std;

ostream& Node::print(ostream &os) const
{
  if(_data == nullptr)
    os << "There is nothing here";
  else
    os << *_data;
  return os;
}

ostream& operator << (ostream &os, const Node &n)
{
  return n.print(os);
}
