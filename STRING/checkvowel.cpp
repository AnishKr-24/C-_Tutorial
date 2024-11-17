


#include<iostream>
using namespace std;
 int main()
 {
    string n = "cowis an animal with four leg";
    int count = 0;
    for (int i = 0; i < n.length(); i++)
    {
        if (n[i]=='a' || n[i]=='e' || n[i]=='i' || n[i]=='o' || n[i]=='u');
        {
            count++;
        }
        
        
    }
    cout<<count;
 }