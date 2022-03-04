#include<iostream>
using namespace std;
int main()
{
    int number;                                             // Initializing the 'number' variable 
    
    // Initializing 'factorial' variable to 'unsigned long long int' so it can store a large value
    
    unsigned long long int factorial=1;
    
    cout<<"Enter any number"<<endl;                             // Print message
    cin>>number;                                                // Get number input from user
    
    for (int i = 1; i <= number; i++)                           // for loop
    {
        factorial = factorial*i;                                // Condition for factorial generation
    }
    
    cout<<"The factorial of " << number << " is " << factorial<<endl;       // Result display
    
    return 0;
}