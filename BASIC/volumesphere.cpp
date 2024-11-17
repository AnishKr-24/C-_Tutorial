//First method function.

using namespace std;
#include<iostream>
// int add(int a,int b){
//     int r=a+b;
//     return r;
// }
// int main(){
//     int res=add(2,3);
//     cout<<res;
//     return 0;
// }


//Second method.
// int addfun2(){
//     int a,b;
//     cin>>a>>b;
//     int res=a+b;
//     cout<<res<<endl;
// }
// int main(){
//     addfun2();
// }




// void swap(int a , int b)  // void swap(int &a , int &b) ismai Address laga de to swap krega.
// {
//     a = a+b;
//     b = a-b;
//     a = a-b;
//     return;
// }
// int main()
// {
//     int x  , y;
//     cout<<"Enter the number : \n";
//     cin>>x>>y;
//     swap(x , y);
//     cout<<x<<" "<<y<<endl;
// }


void swap() {
    int x, y;
    cin >> x >> y;
    int tmp = x;
    x = y;
    y = tmp;
    cout << x << " " << y;
}

int main() {
    swap();
    return 0;
}
