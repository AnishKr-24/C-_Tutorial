

/*

#include<iostream>
using namespace std;
int main()
{
    char name[20];
    cout<<"Enter your name : ";
    cin>>name;
    name[3] ='\0';
    cout<<"Your name is ";
    cout<<name;
    return 0;
}
*/



#include<iostream>
using namespace std;
int getlength(char name[])
{
    int count = 0;
    for (int  i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[10];
    cout<<"Enter the String : ";
    cin>>name;
    cout<<"your name is " << name<<endl;
    cout<<"Length : "<<getlength(name);
    return 0;
}