#include <iostream>
#include <csignal>
#include <cstdio>
#include <unistd.h>
#include <cstring>
#include <sys/wait.h>
#include "Command.hpp"
using namespace std;

/*****************************************************
 *  Example usage of the Command class for project 1 *
 *****************************************************/



/// to compile type "make"
int main(void)
{
    Command com;
    int num=1; // keep track of number of commands. 
    
    // prompt for and read in first command. 
    cout << ">>>> ";
    com.read(); 
    
    while(com.name() != "exit")
    {
    
        // fork here
            if (com.backgrounded() == true)
         {
            cout << ">>>>";
            com.read();
            
            
         }
         
         else
         {
         
         
         }
         
         
         /// in child
        char* args[100];   // Warning
        // new allocate space
        for ( int i; i <= com.numArgs(); i++)
        {
        int myLength = com.args() -> length();
         args [0] = new char[myLength +1];
         strcpy( args[0],  com.args() -> c_str() );
         args[i-1] = NULL;
         }
         
     // Warning
        
         execvp(args[0], args);  // get command name 
         
         
         if (com.backgrounded() == true)
         {
            cout << ">>>>";
            com.read();
            
            
         }
        // print out current command
        cout << num++ << ")" << com << endl;
        
        // prompt for and read next command
	cout << ">>>> ";
        com.read();
    }
    
    cout << "Thank you for using mini-shell. We now return you to your regularly scheduled shell!" << endl;
    return 0;
  
}
