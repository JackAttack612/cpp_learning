#include <iostream> 
#include <cstdlib> 
#include <string.h>
#include <string>

using namespace std; 

int main() 
{ 
    start:
        double calculation = 0;
        cout << "Enter Calculation: ";
        cin >> calculation;
        string eq = to_string(calculation);
        cout << eq << endl;
        cout << "Result: " << calculation << endl;

    goto start;

    return 0;
} 