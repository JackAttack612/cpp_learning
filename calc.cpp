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
        cout << "Result: " << calculation << endl;

    goto start;

    return 0;
} 