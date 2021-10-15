#include <iostream>
#include <cmath>

using namespace std;

void sayHi(string name, int age);

int main()
{
    
    cout << "Top" << endl;
    sayHi("Mike", 40);
    cout << "Bottom" << endl;



    return 0;
}

void sayHi(string name, int age){
    cout << "Hello " << name << " you are" << age << endl;
}
