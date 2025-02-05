#include <iostream>
using namespace std;


// iterative
int factorial(int n)
{
  int a = 1;
  for (int num = 1; num <= n; num++)
  
    a = a * num;
    return a;
  
}

// recursive
int factorial2(int n) 
{
  if (n == 1)
    return 1;
  else
  return n* factorial2(n-1);
}


int main() 
{
  int n;
  cout << "Enter a number: ";
  cin >> n;
  
  int answer = factorial2(n);
  
  cout << "The factorial of " << n << " is " << answer << endl;

  return 0;
}
