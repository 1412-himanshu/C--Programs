#include <iostream>
using namespace std;
int main()
{
    int number;                                                                             // Initializing the variable
    
    cout<<"Enter any number"<<endl;                                                         // Print message
    cin>>number;                                                                            // Get input from user
    
    cout<<"The cube of "<<number<<" is : "<<(number*number*number)<<endl;                  // condition for cube generation
    return 0;
}