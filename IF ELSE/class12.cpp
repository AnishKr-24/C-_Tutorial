

//input percentage of a student and print the grade according to mark



#include<iostream>
using namespace std;
int main()
{
    int mark;
    cout<<"Enter the mark=";
    cin>>mark;
    if (mark>=81 && mark<100)
    {
        cout<<"Mark is very good="<<mark;
    }
    if (mark>=61 && mark<80)
    {
        cout<<"Mark is good="<<mark;
    }
    if (mark>=41 && mark<60)
    {
        cout<<"Mark is average="<<mark;
    }
    if (mark<=40)
    
    {
         cout<<"fail";
    }
}