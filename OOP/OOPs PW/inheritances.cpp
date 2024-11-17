

#include <iostream>
#include <vector>
#include <string>
using namespace std;
class vechicle
{ //Base class , parents class
public:
    int TyerSize;
    int EngineSize;
    int Lights;
    string companyName;
    void showCompany(){
        cout<<companyName<<endl;
    }
    vechicle()
    {
        cout << "Vechicle ka constructor call hua" << endl;
        cout << "********************************" << endl;
    }
};
class Bike : public vechicle
{ // child class,drived class.
public:
    int handleSize;
    Bike()
    {
        cout << "Bike ka constructor call hua" << endl;
        cout << "============================" << endl;
    }
};
class car : public vechicle
{
public:
    int steringSize;
    car()
    {
        cout << "Car ka constructor call hua" << endl;
        cout << "###########################" << endl;
    }
};
int main()
{
    Bike honda;
    honda.handleSize = 6;
    honda.TyerSize = 20;
    honda.companyName = "BMW";
    honda.Lights = 2;

    car BMW40series;
    BMW40series.EngineSize = 9;
    BMW40series.TyerSize = 24;
    BMW40series.Lights = 4;
    cout << honda.TyerSize << endl;
    cout << honda.handleSize << endl;
    cout << honda.Lights << endl;
    cout << "-----------------------" << endl;
    cout << "-----------------------" << endl;
    cout << "-----------------------" << endl;
    cout << BMW40series.TyerSize << endl;
    cout << BMW40series.EngineSize << endl;
    cout << BMW40series.Lights << endl;
    honda.showCompany();
}
