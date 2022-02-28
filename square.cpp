#include<iostream>
using namespace std;
int main()
{
    int number;                                                                     // Initializing the variable
    
    cout << "Enter any number" << endl;                                             // Print message
    
    cin >> number;                                                                  // Get input from user
    
    cout << "The square of " << number << " is " << (number*number) << endl;        // Condition for square generation
    
    return 0;
}