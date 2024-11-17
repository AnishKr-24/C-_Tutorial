

// WAP to composite yaa prime
//important question

# include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number = ";
    cin>>n;
    bool flag = true; // true means prime
    for (int i = 2; i <= n/2; i++)
    {
        if (n%i==0)
        {
            flag=false; //false means composite
            break;
        }
        
    }
    if (n == 1)
    {
        cout<<"Neither prime nor composite";
    }
    else if (flag == true)
    {
        cout<<"Prime number";
        

    }
    else
    {
        cout<<"Composite number";
      
    }
    
    
    
}