

#include <iostream>

using namespace std;

int main() {
    int age, marks;
    string name;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter marks: ";
    cin >> marks;

    if (age >= 17 && age <= 21) {
        if (marks >= 80) {
            cout << name << " is eligible";
        } else {
            cout << name << " is not eligible";
        }
    } else {
        cout << name << " is not eligible";
    }

    return 0;
}