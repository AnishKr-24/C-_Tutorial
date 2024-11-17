
// It is use to getter and Setter .

#include<iostream>
using namespace std;
class Game
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
    Game Anish;
    cout<<"Size of Anish : "<<sizeof(Anish)<<endl;
    cout<<"Anish health is : "<<Anish.gethealth()<<endl;
    Anish.sethealth(90);  // using dot operator
    Anish.level = 'A';


    cout<<"Game Health : "<<Anish.health<<endl;
    cout<<"Game level : "<<Anish.level<<endl;  // ismai error aa gaya kyuki ey class ke bahar hai
    return 0;
}