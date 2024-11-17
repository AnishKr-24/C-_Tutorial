

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    string str;
    cout << "Enter the String: ";
    getline(cin, s);

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'X')
        {
            str.push_back(s[i]);
        }
    }
    sort(str.begin(), str.end());
    cout << str;
    return 0;
}

