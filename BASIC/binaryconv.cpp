

#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number=";
    cin>>num;
    int b=0 , i=0;
    for (int i = 0; num != 0; i++)
    {
        b = b*10+num%2;
        num = num/2;
    }
   
   /*while (num>0)
   {
        b = b*10 + num%2;
        num=num/2;
        i++;
   }
   */
    cout<<"Conversion Binary = "<<b;
    return 0;
}