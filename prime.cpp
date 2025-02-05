#include <iostream>
using namespace std;

int main() {
    int userInput = -1;
    
    while (userInput <0){
      cin>> userInput;
      }
      
    bool isPrime  = true;
    for (int i=2; i < userInput; i++){
    if (userInput% i==0)
      isPrime= false;
    }
    
    if (userInput ==1)
    isPrime=false;
    
    if (isPrime)
    cout<<userInput<< "is prime" << endl;
    else
    cout<<userInput<< " is not prime"<< endl;

  return 0;
}
