

#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a string= ";
    getline(cin, input);
    
    int left = 0;
    int right = input.length() - 1;
    bool isPalindrome = true;

    while (left < right) {
        if (input[left] != input[right]) {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }

    if (isPalindrome)
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;
    
    return 0;
}
