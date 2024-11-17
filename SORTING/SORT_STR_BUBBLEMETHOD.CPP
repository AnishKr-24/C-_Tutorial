

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    string str;
    cout << "Enter the String: ";
    getline(cin, s);
    
    // Filter characters greater than or equal to 'X'
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'X')
        {
            str.push_back(s[i]);
        }
    }
    
    // Bubble sort the filtered string
    int n = str.length();
    for (int i = 0; i < n; i++)  // Best case
    {
        for (int j = 0; j < n-i-1; j++)
        {
        //     if (str[j] > str[j+1])
        //     {                              // wrost case method
        //         char temp = str[j];
        //         str[j] = str[j+1];
        //         str[j+1] = temp;
        //     }
        }
        sort(str.begin(),str.end()); 
    }

    // Output the sorted string
    for (int i = 0; i < str.length(); i++)
    {
       cout << str[i];
    }
    
    return 0;
}
