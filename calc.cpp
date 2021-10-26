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
        string answer = to_string(calculation);
        cout << answer << endl;

    goto start;

    return 0;
} 