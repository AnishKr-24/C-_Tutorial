

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the number of a = "<<endl;
    cin>>a;
    cout<<"Enter the number of b = "<<endl;
    cin>>b;
    for (int  i = a; i <= b; i++)
    {
        if (i>=0 && i<=9)
        {
            switch (i)
            {
            case 1: cout<<"one"<<endl;
                break;
            case 2: cout<<"two"<<endl;
                break;
            case 3: cout<<"three"<<endl;
                break;
            case 4: cout<<"four"<<endl;
                break;
            case 5: cout<<"five"<<endl;
                break;
            case 6: cout<<"six"<<endl;
                break;
            case 7: cout<<"seven"<<endl;
                break;
            case 8: cout<<"eight"<<endl;
                break;
            case 9: cout<<"nine"<<endl;
                break;
            }
            if (i%2==0)
            {
                cout<<"even"<<endl;
            }
            else
               cout<<"odd"<<endl;
            
        }
        
    }
    return 0;
    
}