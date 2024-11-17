

#include<iostream>
using namespace std;
int main()
{
    int mark1,mark2,mark3,mark4,mark5 , totalmarks , percentagemarks;
    cout<<"Enter the marks=";
    cin>>mark1>>mark2>>mark3>>mark4>>mark5;
    totalmarks = mark1+mark2+mark3+mark4+mark5;
    cout<<"total marks of student="<<totalmarks<<endl;
    percentagemarks = (totalmarks*100)/500;
    cout<<"percentage of student="<<percentagemarks;
    return 0;
}