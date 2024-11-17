

#include<iostream>
using namespace std;
class A{
    private:
    int a_ka_private;
    public:
    int a_ka_public;
    void show(){
        cout<<"Mai A ka show\n";
    }
};
class B :public A{
    public:
    int b_ka_public;
    void show(){
        cout<<"Mai B ka show\n";
    }
    
 };

int main()
{
    A a;
    a.show();
    B b;
    b.show();
    b.A::show();
}