

#include <iostream>
using namespace std;

int main() {
    char name[100]; // Assuming a maximum length of 100 characters for the name
    cout << "Enter your name: ";
    cin >> name;

    for (int i = 0; name[i] != '\0'; i++) {
        for (int j = 0; j <= i; j++) {
            cout << name[j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
