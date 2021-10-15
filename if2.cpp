#include <iostream>
#include <cmath>
#include <string>

using namespace std;

double getMax(double num1, double num2){
    double result;


    if(num1 < num2){
        result = num2;
    }
    else if(num1 > num2){
        result = num1;
    }
    else if(num1 == num2){
        cout << num1 << " is equal to ";
        result = num1;
    }
    return result;
}

int main()
{
    double input1, input2;

    cout << "Enter first number: ";
    cin >> input1;
    cout << "Enter second number: ";
    cin >> input2;
    cout << "Your answer is: " << getMax(input1, input2);

    return 0;
}