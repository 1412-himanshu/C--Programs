#include<iostream>
using namespace std;
int main()
{
    int marks;                                                                  // Initializing the variables               
    
    cout << "Enter your marks" << endl;                                         // Print message
    cin >> marks;                                                               // Get input from user
    
    if (marks>85 && marks<=100)                                                 // && -> AND Operator
    {
        cout << "Congratulations!! You secured A+ Grade......" << endl;         // if block
    }
    
    else if (marks>60 && marks<=85)
    {
        cout << "You secured A Grade......" << endl;                            // else-if block
    }
    
    else if (marks>40 && marks<=60)
    {
        cout << "You secured B Grade......" << endl;                            // else-block
    }
    
    else if (marks>30 && marks<=40)
    {
        cout << "You secured C Grade......" << endl;                            // else-if block
    }
    
    else
    {
        cout << "You are Failed......" << endl;                                 // else block
    }
    
    return 0;
}