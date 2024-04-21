#include <iostream>
#include <string>

using namespace std;

int main() {
    int age, wife_age, sons_age;
    string name, wife_name, sons_name;

    cout << "Please type your name: ";
    cin >> name;

    cout << "Please type your age: ";
    cin >> age;

    cout << "Hello " << name << "! Your age is " << age << endl;

    cout << "Type your wife's name and age: ";
    cin >> wife_name >> wife_age;
    cout << "Your wife's name is " << wife_name << " and she is " << wife_age << " years old!" << endl;

    // Clear the newline character from the input buffer
    cin.ignore();

    cout << "Enter your son's full name: ";
    getline(cin, sons_name);

    cout << "Enter your son's age: ";
    cin >> sons_age;

    cout << "Your son's full name is " << sons_name << " and his age is " << sons_age << endl;

    return 0;
}
