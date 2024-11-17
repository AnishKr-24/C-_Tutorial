

#include<iostream>
using namespace std;
class calcultor  // class
{
    public:
    int a;  // Data memeber 
    int b;
    void add()  // memeber function
    {
        cout<<"Add "<<a+b<<endl;
    }
    void sub(){
        cout<<"Subtract "<<a-b<<endl;
    }
    void mul()
    {
        cout<<"Multiple "<<a*b<<endl;
    }
    void div(){
        cout<<"Divided "<<a/b<<endl;
    }
    void mod(){
        cout<<"Modlus "<<a%b<<endl;
    }
};
int main()
{
    calcultor cali;   // Object
    cali.a=20;
    cali.b=3;
    cali.add();
    cali.sub();
    cali.mul();
    cali.div();
    cali.mod();

}