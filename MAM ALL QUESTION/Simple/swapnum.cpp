

#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter the number=";
    cin>>num1>>num2;

    // using third variable
    /*int temp = num1;
    num1 = num2;
    num2 = temp;
    cout<<num1<<" "<<num2<<endl;
    return 0;
    */
   //without using third variable
   num1 = num1 + num2;
   num2 = num1 - num2;
   num1 = num1 - num2;
   cout<<num1<<" "<<num2;
   return 0;
}