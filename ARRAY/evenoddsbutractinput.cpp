
// ismai pahke input array liye fir even odd check kiye ou check kiye hue even odd ko add kiye fir dono subtract kiye;


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of index =";
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the array="<<endl;
        cin>>a[i];
    }
    int evensum=0,oddsum=0 , subtract;
    for (int i = 0; i < n; i++)
    {
        if (i%2==0)
        {
            evensum = evensum + a[i];
        }
        else
        oddsum += a[i];
        
    }
    cout<<"Even sum = "<<evensum<<endl<<"Odd sum ="<<oddsum<<endl;
    subtract = evensum - oddsum;
    cout<<"Both subtract = "<<subtract<<endl;
    return 0;

    
    
}