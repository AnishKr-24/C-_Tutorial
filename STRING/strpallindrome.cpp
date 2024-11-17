


#include<iostream>
using namespace std;
bool checPalindrome(char a[] , int n)
{
    int start = 0;
    int end = n-1;
    while (start<=end)
    {
        if(a[start]!=a[end])
        {
            return 0;
        }
        else
        {
            start++;
            end--;
        }
    }
    return 1;
}
void reverse(char name[],int n)
{
    int s = 0;
    int e = n-1;
    while (s<e)
    {
        swap(name[s++] , name[e--]);
    }
    
}
int getlength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[20];
    cout<<"Enter your name : ";
    cin>>name;
    int len = getlength(name);
    cout<<"Length : "<<len<<endl;
    reverse(name,len);
    cout<<"Your name is : ";
    cout<<name<<endl;
    cout<<"Palindrome or not : "<<checPalindrome(name,len)<<endl;
    return 0;
}