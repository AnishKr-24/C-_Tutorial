#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter the character: ";
    cin >> ch;

    // Output the ASCII value of the entered character
    cout << "The ASCII value of '" << ch << "' is " << static_cast<int>(ch) << endl;

    return 0;
}
