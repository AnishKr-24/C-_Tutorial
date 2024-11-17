
// 1st Method.

/*
#include<iostream>
using namespace std; 
int main()
{
    int size;
    cout<<"Enter the number=";
    cin>>size;
    if(size==250)
    {
        cout<<"The price of popcorn ( size XL)= "<<size;
        
    }
    else if (size==200)
    {
        cout<<"The price of popcorn (size L)="<<size;
        
    }
    else if (size==100)
    {
        cout<<"The price of popcorn (size M )="<<size;
        
    }
    else if (size==50)
    {
        cout<<"The price of popcorn (size S)="<<size;
    }
    else if (size<50)
    {
        cout<<"Invalid";
    }
    
    
    return 0;
}
*/



//2nd Method.
/*
#include <iostream>
using namespace std;

int main() {
    char size;
    cout << "Enter the size of popcorn (S/M/L/XL): ";
    cin >> size;
    int price;
    switch(size) {
        case 'S':
            price = 50;
            break;
        case 'M':
            price = 100;
            break;
        case 'L':
            price = 200;
            break;
        case 'XL':
        price = 250;
            break;
        default:
            cout << "Invalid size!" << endl;
            return 1;
    }
    cout << "The price of popcorn "<<size<<endl;
    cout<<price;

    return 0;
}
*/



//3rd Method.
#include<iostream>
using namespace std; 
int main()
{
    char size;
    cout<<"Enter the size of popcorn (S/M/L/XL):";
    cin>>size;
    int rate;
    if(size=='S')
    {
        rate=50;
        
    }
    else if (size=='M')
    {
        rate=100;
        
    }
    else if (size=='L')
    {
        rate=200;
        
    }
    else if (size=='X')
    {
        rate==250;
    }
    else if (size<50)
    {
        cout<<"Invalid";
    }
    cout << " Popcorn Size and Rate = "<<(size)<<" ";
    cout<<rate;
    
    return 0;
}