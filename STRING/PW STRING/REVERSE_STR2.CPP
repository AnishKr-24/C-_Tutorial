


#include <iostream>
#include <string>
#include <algorithm> // Include the algorithm header for reverse()
using namespace std;
int main() {
    string str; //= "abcdefgh";
    cin>>str;
    cout<<str<<endl;
    cout<<"------------------------------"<<endl;
    // string str;   // user input.
    // cout<<"Enter the string : ";
    // getline(cin,str);
    // cout<<str<<endl;
    reverse(str.begin()+2, str.end()-1);
    cout << str << endl; // Print the reversed string
    cout<<"------------------------------"<<endl;
    reverse(str.begin()+1, str.begin()+4);
    cout << str << endl;
    return 0;
}