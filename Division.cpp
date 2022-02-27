#include<iostream>
using namespace std;
int main()
{
    float num1, num2, result;                                                               // Initializing the variables
    
    cout << "Division of Numbers" << endl;                                                  // Print message
    
    cout << "Enter first number" << endl;
    cin >> num1;                                                                            // Input first number
    
    cout << "Enter second number" << endl;
    cin >> num2;                                                                            // Input second number
    
    result = num1 / num2;                                                                   // Division Operation
    
    cout << "The division of the given numbers is : " << result << endl;                    // Result Generation           
    return 0;
}