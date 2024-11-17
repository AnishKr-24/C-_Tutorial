

#include <iostream>
#include<vector>
#include<string>
using namespace std;

class Bike {
public:
    int TyerSize;
    int EngineSize;
    //parameterished Constructor.
    //value initalished.
    Bike(int TyerSize,int EngineSize) {
        this->TyerSize = TyerSize;
        this->EngineSize=EngineSize;
        //cout << "Constructor call hua" << endl;
    }
};

int main() {
    Bike Honda(20,40);   // Object Creation
    Bike Appache(30,50);
    Bike Hero(40,60);

    cout << "Honda : " <<Honda.TyerSize <<" "<<Honda.EngineSize<< endl;
    cout << "Appache : "<<Appache.TyerSize <<" "<< Appache.EngineSize <<  endl;
    cout << "Hero : "<<Hero.TyerSize <<" "<< Hero.EngineSize <<endl;

    return 0;
}
