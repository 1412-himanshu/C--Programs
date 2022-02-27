#include<iostream>
using namespace std;
int main()
{
    int num1, num2, result;                                                              // Initializing the variables
   
    cout << "Multiplication of Numbers" << endl;                                         // Print message
   
    cout << "Enter first number" << endl;
    cin >> num1;                                                                         // Input first number
   
    cout << "Enter second number" << endl;
    cin >> num2;                                                                         // Input second number
   
    result = num1 * num2;                                                                // Multiplication operation
   
    cout << "The multiplication of the given numbers is : " << result << endl;           // Result Generation
    return 0;
}