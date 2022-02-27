#include <iostream>
using namespace std;
int main()
{
    int num1, num2, result;                                                             // Initializing the variables
    
    cout << "Addition of Numbers" << endl;                                              // Print message
    
    cout << "Enter first number" << endl;
    cin >> num1;                                                                        //Input first number
    
    cout << "Enter second number" << endl;
    cin >> num2;                                                                        // Input second number
    
    result = num1 + num2;                                                               // Addition operation
    
    cout << "The addition of the given numbers is : " << result << endl;                // Result generation
    return 0;
}