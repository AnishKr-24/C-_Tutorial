
//input se sum 

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the array size : ";
//     cin>>n;
//     int arr[n] ;
//     for (int  i = 0; i < n; i++)
//     {
//         cout<<"Enter the array=";
//         cin>>arr[i];
//     }
//     float sum =0;
//     float avg;
//     for (int i = 0; i < n; i++)
//     {
//         sum = sum+arr[i];
//         avg = sum/arr[i];
//     }
//     cout<<"Average : "<<avg<<endl;
//     return 0;
    
// }

#include<iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0 , avg;
    int i;
    for (i = 1; i <= 5; i++)
    {
        cout<<"Enter the number : ";
        cin>>n;
        sum += i;
    }
    avg = sum/5;
    cout<<avg;
}


// #include <iostream>
// using namespace std;

// // Function to calculate the sum of values up to a given limit
// int sum_of_values(int limit) {
//     return limit * (limit + 1) / 2;
// }

// // Function to calculate the sum of all values up to a given limit
// int sum_all_values(int limit) {
//     int sum = 0;
//     for (int i = 1; i <= limit; ++i) {
//         sum += i;
//     }
//     return sum;
// }

// int main() {
//     int m = 5;  // Value of m
//     int n = 31; // Value of n

//     int sum_result;     // Variable to store the sum result
//     int sub_result;     // Variable to store the subtraction result

//     // Checking if n is divisible by 5
//     if (n % 5 == 0) {
//         sum_result = sum_all_values(m); // If n is divisible by 5, calculate the sum of values up to m
//     } else {
//         // If n is not divisible by 5, calculate the sum of values up to m,
//         // and calculate the subtraction of the sum of values up to n
//         sum_result = sum_all_values(m);
//         sub_result = sum_of_values(n) - sum_all_values(n);
//     }

//     // Printing the results
//     cout << "Sum result: " << sum_result << endl;
//     cout << "Subtraction result: " << sub_result << endl;

//     return 0;
// }
