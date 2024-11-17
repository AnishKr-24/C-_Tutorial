


#include<iostream>
using namespace std;
int main()
{
    char str[10] ={'a','b','\0','d','e'};  // '\0' lagne ke bad age ke digit ko skip kar dega.
                                            //jaha per use kiye obaha per skip kar dega.
    // for (int i = 0; str[i] != '\0' ; i++)
    // {
    //     cout<<str[i]<<" ";  
    // }

    cout<<str;
    
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<str[i]<<" ";   // ismai = a b c d e ayega.
    // }


    // char str[] = "abcde";
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<str[i]<<" ";  // ismai bhi = a b c d e ayega.
    // }
    // return 0;

    //char ch = '\0';  ey null char(special char)

    // char ch = '\0';
    // cout<<(int)ch;  iska  ASCI value 


    // char str[10] ={'a','b','c','d','e'};
    // cout<<(int)(str[5]);  // ey zero dega kyuki array of char ke jayda liye hai.
    // cout<<str[5] // ismai error aa raha hai.

    
}