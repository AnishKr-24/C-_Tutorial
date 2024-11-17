
// small jangana


#include<iostream>
using namespace std;
int main()
{
    int age ;
    cout<<"Enter the age=";
    cin>>age;
    if (age>9 and age<18 )
    {
       cout<<"you are child";
       
    }
    else if (age>=18 and age<=40)
    {
        cout<<"you are  married person=";
        string martialstatus;
        cin>>martialstatus;
        if (martialstatus=="yes")
        {
            cout<<"how many children  have= ";
               int children;
               cin>>children;
               if (children<=3)
                   {
                    cout<<"you are eligible for government benfitis";
                   }
               else if (children>3 and children<=5)
                  {
                    cout<<"you are not eligible for government benfitis";
                  }
               else if (children>5 and children<=8)
                 {
                  cout<<"you are all family moved from villlge";
                 }
        
               else
                 cout<<"you should a cricket team";
      
           
       
        }
        else
             cout<<"you are unmaried";
          
        
    }
    else if (age>=40 and age<60)
    {
        cout<<"you are growing old age";
    }
    
    else
       cout<<"you are old";
    
}






































