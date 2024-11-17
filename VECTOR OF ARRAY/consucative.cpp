

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> n;
    int count; // Variable to store the number of integers to be read

    // First, read the number of integers to be entered
    cout << "Enter the number of integers: ";
    cin >> count;

    // Read integers into the vector
    cout << "Enter " << count << " integers:" << endl;
    for (int i = 0; i < count; i++) {
        int value;
        cin >> value;
        n.push_back(value);
    }

    // Print the integers
    cout << "You entered:" << endl;
    for (int x : n) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
