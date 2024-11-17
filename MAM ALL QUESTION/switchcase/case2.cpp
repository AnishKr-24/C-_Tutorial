

#include<iostream>
using namespace std;
int main()
{
    char ch = '1';
    switch (ch)
    {
    case '1':
        switch (ch)
        {
        case '1':
            cout<<"A VALUE OF ="<<ch<<endl;
            break;
        }
        break;
    default:
        cout<<"other wise";
        break; 
    }
    return 0;
}