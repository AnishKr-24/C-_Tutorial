

#include<iostream>
using namespace std;
class Game
{
    //prpoerties
    public :  // public class ke andar bahar kahi per acess kar skta hai.
    int health;
    //private :
    char level;
    void h1()
    {
        cout<<level<<endl;  // ey class ke ander hai.
    }
};
int main()
{
    Game Anish;
    cout<<"Size of Anish : "<<sizeof(Anish)<<endl;
    cout<<"Anish health is : "<<Anish.health<<endl;
    Anish.health=60;  // using dot operator
    Anish.level = 'A';


    cout<<"Game Health : "<<Anish.health<<endl;
    cout<<"Game level : "<<Anish.level<<endl;  // ismai error aa gaya kyuki ey class ke bahar hai
    return 0;
}