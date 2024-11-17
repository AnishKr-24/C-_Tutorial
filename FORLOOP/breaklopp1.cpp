
//write a program in factor


# include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the name = ";
  cin>>n;
  for (int  i = 1; i < n; i++)
  {
    if ((n%i==0))
    {
        cout<<i<<" ";
    }
    
  }
  
}