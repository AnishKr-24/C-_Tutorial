

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the character size :";
    cin>>n;
    char str[n];
    cout<<"Enter the character Element :";
    for (int i = 0; i < n; i++)
    {
        cin>>str[i];
    }
    int count = 0;
    for(int i = 0; i < n; i++) 
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') 
        //ey consonent ke logic if (str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U' && str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u') 
        {
            count++;
        }
        i++;
    }
  cout<<"Number of Vowel : "<<count;
  return 0;
}