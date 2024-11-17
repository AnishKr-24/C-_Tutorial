


#include <iostream>
#include <string>
#include <algorithm> // Include the algorithm header for reverse()
using namespace std;
int main() {
    // string str = "abcd";
    // cout<<str<<endl;
    string str;   // user input.
    cout<<"Enter the string : ";
    getline(cin,str);
    cout<<str<<endl;
    reverse(str.begin(), str.end());
    cout << str << endl; // Print the reversed string
    return 0;
}
