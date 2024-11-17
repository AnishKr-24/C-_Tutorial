

#include<iostream>
using namespace std;

class Player{
private:
    int health;
    int age;
    int score;
    bool alive;
public:
    // Getter methods
    int gethealth(){
        return health;
    }
    int getage(){
        return age;
    }
    int getscore(){
        return score;
    }
    bool isAlive(){
        return alive;
    }
    // Setter methods
    void sethealth(int health){
        this->health=health;
    }
    void setage(int age){
        this->age=age;
    }
    void setscore(int score){
        this->score=score;
    }
    void setAlive(bool alive){
        this->alive=alive;
    }
};

int addScore(Player a, Player b){
    return a.getscore() + b.getscore();
}
Player getMaxPlayerScore(Player a , Player b){
    if(a.getscore() > b.getscore())
        return a;
    else
        return b;
}
int main()
{
    

    Player *urvi=new Player;
    //Player urviObj=*urvi;  // 1st method


    // urviObj.setscore(40);  // 1st method
    // urviObj.setage(30);
    urvi->setscore(30);  // 2nd method
     
    //cout<<urviObj.getscore()<<endl;  // 1st method 
    cout<<urvi->getscore()<<endl;  // 2nd method
    
    return 0;
}
