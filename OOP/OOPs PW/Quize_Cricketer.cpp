

#include<iostream>
using namespace std;
class cricketer{
public:
    char name;
    int age;
    int noOfMatchs;
    int avg;
};
int main()
{
    cricketer virat;
    virat.name='V';
    virat.age=33;
    virat.noOfMatchs=100;
    virat.avg=87;
    

    cricketer dhoni;
    dhoni.name='D';
    dhoni.age=47;
    dhoni.noOfMatchs=200;
    dhoni.avg=57;

    cricketer maxi;
    maxi.name='M';
    maxi.age=32;
    maxi.noOfMatchs=90;
    maxi.avg=82;
    

    cricketer Rohit;
    Rohit.name='R';
    Rohit.age=41;
    Rohit.noOfMatchs=120;
    Rohit.avg=86;


    cricketer jaddu;
    jaddu.name='J';
    jaddu.age=34;
    jaddu.noOfMatchs=120;
    jaddu.avg=40;
    

    cricketer Hardik;
    Hardik.name='H';
    Hardik.age=29;
    Hardik.noOfMatchs=70;
    Hardik.avg=50;


    cricketer BumBum;
    BumBum.name='B';
    BumBum.age=30;
    BumBum.noOfMatchs=70;
    BumBum.avg=37;
    

    cricketer Mathewe;
    Mathewe.name='M';
    Mathewe.age=41;
    Mathewe.noOfMatchs=210;
    Mathewe.avg=53;

    cricketer siraj;
    siraj.name='S';
    siraj.age=23;
    siraj.noOfMatchs=90;
    siraj.avg=22;
    

    cricketer Sanju;
    Sanju.name='s';
    Sanju.age=25;
    Sanju.noOfMatchs=40;
    Sanju.avg=80;


    cricketer Isan;
    Isan.name='I';
    Isan.age=20;
    Isan.noOfMatchs=20;
    Isan.avg=90;
    

    cricketer Panday;
    Panday.name='P';
    Panday.age=30;
    Panday.noOfMatchs=120;
    Panday.avg=51;


    cricketer suman;
    suman.name='S';
    suman.age=33;
    suman.noOfMatchs=100;
    suman.avg=87;
    

    cricketer Anish;
    Anish.name='A';
    Anish.age=47;
    Anish.noOfMatchs=200;
    Anish.avg=57;

    cricketer Raj;
    Raj.name='R';
    Raj.age=32;
    Raj.noOfMatchs=90;
    Raj.avg=82;
    

    cricketer Mantu;
    Mantu.name='M';
    Mantu.age=41;
    Mantu.noOfMatchs=120;
    Mantu.avg=86;


    cricketer Gaurav;
    Gaurav.name='G';
    Gaurav.age=34;
    Gaurav.noOfMatchs=120;
    Gaurav.avg=40;
    

    cricketer Omkar;
    Omkar.name='O';
    Omkar.age=29;
    Omkar.noOfMatchs=70;
    Omkar.avg=50;


    cricketer Bteshar;
    Bteshar.name='B';
    Bteshar.age=30;
    Bteshar.noOfMatchs=70;
    Bteshar.avg=37;


    cricketer Tenni;
    Tenni.name='T';
    Tenni.age=30;
    Tenni.noOfMatchs=70;
    Tenni.avg=37;
    

    cricketer cricketers[20]={virat,dhoni,maxi,Rohit,Sanju,Hardik,Panday,jaddu,siraj,BumBum,Isan,Mathewe,Tenni,Bteshar,Omkar,Gaurav,Mantu,Raj,Anish,suman};
    for (int i = 0; i < 20; i++)
    {
        cout<<cricketers[i].name<<endl;
        cout<<cricketers[i].age<<endl;
        cout<<cricketers[i].noOfMatchs<<endl;
        cout<<cricketers[i].avg<<endl;
        cout<<"======================"<<endl;
    }
    return 0;
}