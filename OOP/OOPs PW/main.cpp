#include<iostream>
using namespace std;
class calcultor  
{
    public:
    int a;  
    int b;
    int add(int a, int b){
        return a+b;
    }
    int subtract(int a ,int b){
        return a-b;
    }
    
};
int main()
{
    calcultor cali;   
    // cali.a=20;
    // cali.b=3;
    // cali.add();
    int a , b;
    cin>>a>>b;
    int result=cali.add(a,b);
    cout<<"the Add:"<<result;
    result=cali.subtract(a,b);
    cout<<endl;
    cout<<"the Subtract:"<<result;

}










