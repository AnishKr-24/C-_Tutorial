

#include<iostream>
using namespace std;
void america()
{
    cout<<"i live in america"<<endl;
    cout<<"america is a good country"<<endl;
    
}

void anand()
{
    cout<<"anand is genius boy"<<endl;
    cout<<"anand live in vijayawada"<<endl;
    america();
   
}
void patna()
{
    cout<<"patna is a capital of bihar"<<endl;
    cout<<"mahavir tempale in patna"<<endl;
    anand();
}
int main()
{
    patna();
    return 0;
}