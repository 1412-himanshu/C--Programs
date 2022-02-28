#include<iostream>
using namespace std;
int main()
{
    int number;                                                                     // Initializing the variable
    
    cout << "Enter any number" << endl ;                                            // Print message
    cin >> number;                                                                  // Get input from user
    
    cout << "The Multiplication Table of " << number << " is " << endl;
    
    for (int i = 1; i <= 10; i++)                                                   // for loop
    {
        cout << (number*i) << endl;                                                 // condition for multiplication table generation
    }
    
    return 0;
}