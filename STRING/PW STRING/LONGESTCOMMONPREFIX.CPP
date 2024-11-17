

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    // cout << "Enter the number of strings: ";
    // cin >> n;
    // cin.ignore(); // to clear the newline character from the buffer
    vector<string> m;

    for (int i = 0; i < 3; i++)
    { // for (int i = 0; i < n; i++ to number of string lena padega.
        string str;
        cout << "Enter string : ";
        getline(cin, str);
        m.push_back(str);
    }
    // m.push_back("man");
    // m.push_back("mann");
    // m.push_back("mannu");
    for (int i = 0; i < m.size(); i++)
    {
        cout << m[i] << endl;
    }
    cout << endl;
    sort(m.begin(), m.end());
    cout << "Sort the string : " << endl;
    for (int i = 0; i < m.size(); i++)
    {
        cout << m[i] << endl;
    }
}