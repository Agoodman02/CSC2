// Add defines at beginning and end of file
#ifndef _NODE_HPP_
#define _NODE_HPP_

#include <iostream>
#include <string>
using namespace std;


class Node 
{
  private: 
    // The data 
    string *_data;
    Node *_next;
  
  public:
  // First: Constructors 
  // Default + parameterized constructors
    Node(): _data(nullptr), _next(nullptr) {}
    Node(const string &val): _data(new string(val)), _next(nullptr){}
    
  // Second: Accessors(get) and Modifiers(set)
  string* ndata()const {return _data;}
  Node* next()const {return _next;}
  
  string* &ndata(){return _data;}
  Node* &next(){return _next;}
  
  ostream& print(ostream &os) const;
  
  
}; 

ostream& operator<< (ostream &os, const Node &n);

#endif
