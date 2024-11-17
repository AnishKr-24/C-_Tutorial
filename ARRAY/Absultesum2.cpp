
// First Method.


/*
#include <iostream>
using namespace std;

// Function to calculate the sum of digits of a number
int digitSum(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// Function to find the least value
int findLeastValue(int n) {
    while (n >= 10) {
        n = digitSum(n);
    }
    return n;
}

int main() {
    int number;
    cout << "Enter a number between 0001 and 9999: ";
    cin >> number;

    // Check if the input is within the range
    if (number < 1 || number > 9999) {
        cout << "Invalid input! Number must be between 0001 and 9999." << endl;
        return 1;
    }

    int leastValue = findLeastValue(number);
    cout << "The least value of " << number << " is: " << leastValue << endl;

    return 0;
}
*/


// Second Method

/*

#include <iostream>

int main() {
    int number;
    std::cout << "Enter a four-digit number (0001 to 9999): ";
    std::cin >> number;

    int sum = 0;
    while (number != 0) {
        sum =sum+ number % 10;
        number =number/ 10;
    }
    while (sum >= 10) {
        int temp = sum;
        sum = 0;
        while (temp > 0) {
            sum =sum+ temp % 10;
            temp =temp/ 10;
        }
    }

    std::cout << "Sum of least value: " << sum << std::endl;

    return 0;
}
*/


//Third Method is Best Method.



#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number=";
    cin>>num;
    int d1,d2,d3,d4;
    d1=num/1000;
    d2=(num/100)%10;
    d3=(num/10)%10;
    d4=num%10;
    int sum = d1+d2+d3+d4;
    while (sum>10)
    {
        int temp = 0;
        while (sum>0)
        {
            temp = temp + sum % 10;
            sum = sum/10;
        }
        sum = temp;
    }
    cout<<"Absolute sum of least value="<<sum;
    return 0;
}