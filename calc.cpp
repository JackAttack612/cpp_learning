#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string calculator(){
    string calculation = "Error Code: 001";
    cout << "Enter Calculation: ";
    getline(cin, calculation);
    if (calculation == "help"){
        return calculation;
    }
    else{
        return calculation;
    }
    return calculation;
}



int main()
{

    calculator();

    return 0;
}