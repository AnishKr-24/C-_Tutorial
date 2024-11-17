


#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the total money=";
    cin>>num;
    int x;
    cout<<"Enter the operation=";
    cin>>x;
    switch (x)
    {
    case 1:
        cout<<"number of notes="<<(num/100)<<endl;
        break;
    case 2:
        cout<<"number of notes="<<(num/50)<<endl;
        break;
    case 3:
        cout<<"number of notes="<<(num/20)<<endl;
        break;
    case 4:
        cout<<"number of notes="<<(num/10)<<endl;
        break;
    case 5:
        cout<<"number of notes="<<(num/1000)<<endl;
        break;
    default:
        cout<<"Other wise";
        break;
    }
    return 0;
}