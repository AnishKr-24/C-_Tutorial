

#include<iostream>
using namespace std;
int main(){
    // char ch;
    // cout<<"Enter the character: ";
    // cin>>ch;
    // if(ch<=65 && ch>=90){
    //     cout<<"uppecase\n";
    // }
    // else   cout<<"lowercase\n";


    int n;
    cin>>n;
    // int sum=0;
    // for(int i=0; i<=n; i++){
    //     sum=sum+i;
    // }
    // cout<<sum;


    // int evenSum=0;
    // for(int i=0; i<=n; i++){
    //     if(i%2==0){ // if(i%2!=0)
    //         evenSum += i;
    //     }
    // }
    // cout<<"Sum of even number : "<<evenSum;


//This is factorial.
    int f=1;
    for(int i=1; i<=n; i++){
        f *= i;
    }
    cout<<f;
    return 0;
}