

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>m;
    m.push_back(3);
    m.push_back(13);
    m.push_back(31);
    m.push_back(23);
    m.push_back(39);
    m.push_back(30);
    cout<<m[0]<<" ";
    cout<<m[1]<<" ";
    cout<<m[2]<<" ";
    m[3]=200;  // update.
    cout<<m[3]<<" ";
    cout<<m[4]<<" ";
    cout<<m[5]<<" ";
}


// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int>m;
//     m.push_back(3);
//     //cout<<m.size()<<endl;  // all m.size o/p 1 2 3 4 5 6 
//     cout<<m.capacity()<<endl;
//     m.push_back(13);
//     //cout<<m.size()<<endl;
//     cout<<m.capacity()<<endl; 
//     m.push_back(31);
//     //cout<<m.size()<<endl;
//     cout<<m.capacity()<<endl;
//     m.push_back(23);
//     //cout<<m.size()<<endl;
//     cout<<m.capacity()<<endl;
//     m.push_back(39);
//     //cout<<m.size()<<endl;
//     cout<<m.capacity()<<endl;
//     m.push_back(30);
//     //cout<<m.size()<<endl;
//     cout<<m.capacity()<<endl;
   
   
// }




// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int>m;
//     m.push_back(3);
//     m.push_back(13);
//     m.push_back(31);
//     m.push_back(23);
//     m.push_back(39);
//     m.push_back(30);
//     for (int i = 0; i < m.size(); i++)
//     {
//         cout<<m[i]<<" ";
//     }
//     cout<<endl;
//     m.pop_back(); // one by one delete.
//     m.pop_back();
//     for (int i = 0; i < m.size(); i++)
//     {
//         cout<<m[i]<<" ";
//     }
// }