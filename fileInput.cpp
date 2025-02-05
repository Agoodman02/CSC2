#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int userInput = -1;
    
    ifstream fin;
    fin.open("input.txt");
    
    
    while (userInput <0){
      fin>> userInput;
      }
      
    bool isPrime  = true;
    for (int i=2; i < userInput; i++){
    if (userInput% i==0)
      isPrime= false;
    }
    
    fin.close();
    
    ofsteam fout;
    fout.open("output.txt");
    
    if (userInput ==1)
    isPrime=false;
    
    if (isPrime)
    fout<<userInput<< " is prime" << endl;
    else
    fout<<userInput<< " is not prime"<< endl;
    
    fout.close();
    
  return 0;
}
