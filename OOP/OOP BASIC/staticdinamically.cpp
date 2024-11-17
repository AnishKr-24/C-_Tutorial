

#include<iostream>
using namespace std;
class hero
{
    //prpoerties
    private :  // public class ke andar bahar kahi per acess kar skta hai.
    int health;
    public : 
    char level;
    void h1()
    {
        cout<<level<<endl;  // ey class ke ander hai.
    }
    int gethealth()
    {
        return health;
    }
    char getlevel()
    {
        return level;
    }
    void sethealth(int h1)
    {
        health=h1;
    }
    void setlevel(char ch)
    {
        level = ch;
    }
};
int main()
{
    // Static allocation
    hero a;
    a.sethealth(50);
    a.setlevel('B');
    cout<<"Level is : "<<a.level<<endl;
    cout<<"health is  : "<<a.gethealth()<<endl;
    
    // Dynamic allocation
    hero *p = new hero;
    p->sethealth(70);
    p->setlevel('A');
    cout<<"Level is : "<<(*p).level<<endl;
    cout<<"health is  : "<<(*p).gethealth()<<endl;

    //or dono same hai

    cout<<"Level is : "<<p->level<<endl;
    cout<<"health is  : "<<p->gethealth()<<endl;
    
    return 0;
}