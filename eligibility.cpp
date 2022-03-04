#include<iostream>
using namespace std;
int main()
{
    int age;                                                    // Initializing the variables
    
    cout << "Enter your age" << endl;                           // Print message
    cin >> age;                                                 // Get age input from user
    
    if (age >= 18)                                              // if-else block
    {
        cout << "You are eligible to vote";                     // prints when if block is True
    }
    
    else
    {
        cout << "Sorry, You are not eligible";                  // prints when if block is False
    }
    
    return 0;
}