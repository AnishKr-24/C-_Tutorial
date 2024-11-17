
//print the cost price and selling price


/*#include<iostream>
using namespace std;
int main()
{
    int cp , sp ;
    cout<<"Enter the cost price=";
    cin>>cp;
    cout<<"Enter the selling price=";
    cin>>sp;

    if(cp<sp)
    cout<<"output the cost price\n";
    if (sp<cp)
    cout<<"output the selling price\n";
    if(cp == sp)
    cout<<"output the no profit and no loss\n";
    
    
    
}*/


//second method



/*#include<iostream>
using namespace std;
int main()
{
    int cp , sp ;
    cout<<"Enter the cost price=";
    cin>>cp;
    cout<<"Enter the selling price=";
    cin>>sp;

    if(cp<sp)
    cout<<"output the cost price\n";
    if (sp<cp)
    cout<<"output the selling price\n";
    else
    cout<<"output the no profit and no loss\n";
    
    
    
}
*/


//third method


#include<iostream>
using namespace std;
int main()
{
    int cp , sp ;
    cout<<"Enter the cost price=";
    cin>>cp;
    cout<<"Enter the selling price=";
    cin>>sp;

    if(cp<sp){
    cout<<"output the cost price\n"<<sp-cp;
    }
    if (sp<cp)
    {
    cout<<"output the selling price\n"<<cp-sp;
    }
    else
    {
    cout<<"output the no profit and no loss\n";
    }
    
    
    
}



