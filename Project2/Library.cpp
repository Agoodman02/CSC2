#include "Library.hpp"
#include "Book.hpp"
#include <iostream>
#include <string>
using namespace std;

  Library::Library(istream &is)
  {
    _books = new Book[5];
    _capacity = 5;
    _numBooks = 0;
    is >> *this;
  }

  
  Book* Library::find(const Book &b)
  {
    for (int i = 0; i < _capacity; i++)
    {
      if (b == _books[i])
        return *b;
      else 
        return NULL;
    }
  }
 /*  
  Book* Library::checkOut (const Book &b)
  {
     for (int i = 0; i < _capacity; i++)
    {
      if (b == Books[i]);
        Book::checkouts(+1);
        return *b;
      else 
        return NULL;
    }
  }
  
 
  Library& Library::operator = (const Library &libr)
  {
  
  }
  
  Library& operator += (const Book &b);
  
  Library& operator += (const Library &libr);
  
  Library& operator -= (const Book &b);
  
  Library& operator + (const Library &libr); 
  
  istream& read(istream &is);
  
  ostream& print(ostream &os) const;
  

//doesn't need to be scoped
ostream& operator << (ostream &os, const Library &libr);

istream& operator >> (istream &is, const Library &libr);
{
 // use read()
}
*/


    







