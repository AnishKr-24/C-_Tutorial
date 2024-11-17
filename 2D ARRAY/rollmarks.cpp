



#include<iostream>
using namespace std;
int main()
{
    int rollmarks[2][4] = {{76,13,82,88},{81,76,91,90}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<rollmarks[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
}

/*

#include<iostream>
using namespace std;
int main()
{
    int rollmarks[4][2] = {{76,81},{13,76},{82,91},{88,90}};
    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 2; i++)
        {
            cout<<rollmarks[j][i]<<" ";
        }
        cout<<endl;
        
    }
    
}
*/