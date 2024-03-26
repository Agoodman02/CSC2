#ifndef _LIBRARY_HPP_
#define _LIBRARY_HPP_
#include "Book.hpp"
#include <iostream>
using namespace std; 

  class Library 
  {
  
    private:
    Book*_books;
    int _numBooks;
    int _capacity; 
    
    public:
    Library(): _books(new Book[5]), _capacity(5), _numBooks(0){}
    Library(istream &is);
    
    int size() const
    {
      return _numBooks;
    }
    
    int emptySlots() const
    {
      return _capacity - _numBooks;
    }
    
    void clear()
    {
      _numBooks = 0;
    }
    
    Book* find(const Book &b);
    
    Book* checkOut (const Book &b);
    
    Library& operator = (const Library &libr);// calls clear method
    
    Library& operator += (const Book &b);// call find
    
    Library& operator += (const Library &libr); // 
    
    Library& operator -= (const Book &b);
    
    Library& operator + (const Library &libr); 
    
    istream& read(istream &is); // clear()
    
    ostream& print(ostream &os) const;
    
      
  };
  
  ostream& operator << (ostream &os, const Library &libr);
  
  istream& operator >> (istream &is, const Library &libr);

#endif
