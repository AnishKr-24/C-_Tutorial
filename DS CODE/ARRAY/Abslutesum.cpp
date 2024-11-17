

/*

#include<iostream>
using namespace std;
int main()
{
    int num=10000;
    int arr[num];
    cout<<"Enter the array of element=";
    for (int i = 0; i < num; i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    //int leastnum = INT8_MAX;
    for (int i = 0; i < num; i++)
    {
        sum += abs(arr[i]);
        //leastnum = min(leastnum,arr[i]);
    }
    //int sumof = sum + arr[i];
    cout<<sumof;
}
*/




#include <iostream>

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int reduceToSingleDigit(int num) {
    while (num >= 10) {
        num = sumOfDigits(num);
    }
    return num;
}

int main() {
    int number;
    std::cout << "Enter a number between 0001 and 9999: ";
    std::cin >> number;

    if (number < 1 || number > 9999) {
        std::cout << "Invalid input. Please enter a number between 0001 and 9999." << std::endl;
        return 1;
    }

    int sum = sumOfDigits(number);
    std::cout << "Sum of digits: " << sum << std::endl;

    int reducedSum = reduceToSingleDigit(sum);
    std::cout << "Reduced to single digit: " << reducedSum << std::endl;

    return 0;
}
