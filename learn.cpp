#include <iostream>

using namespace std;

int main()
{

    string charName;
    int charAge;
    string pronoun;
    string continuation;

    cout << "What is your characters name: ";
    getline(cin, charName);
    cout << "What is your characters age: ";
    cin >> charAge;
    cout << "Is your Character a boy or girl: ";
    getline(cin, pronoun);
    cout << endl;
    cout << "There one was a " << pronoun << " named " << charName<< endl;
    cout << pronoun << " was " << charAge << " years old" << endl;
    cout << pronoun << " really liked the name " << charName << endl;
    cout << "but didn't like being " << charAge << "." << endl;

    return 0;
}