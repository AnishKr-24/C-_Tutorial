


#include<iostream>
using namespace std;
class hero
{
    //prpoerties
    private :  // public class ke andar bahar kahi per acess kar skta hai.
    int health;
    public :
    char level;
    hero()
    {
        cout<<"Constructor Called : "<<endl;
    }
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
    //object  created statically.
    cout<<"Hii"<<endl;   // pahke hii fir constructor uske bad hello run kiya.
    hero ramesh;
    cout<<"Hello"<<endl;
    

    //Dynamically created .
    hero *g = new hero;
    hero *h = new hero();
    return 0;
}