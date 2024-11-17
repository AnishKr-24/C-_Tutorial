

#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

// Function to generate OTP
int generateOTP() {
    srand(time(0)); // Seed for random number generator
    return rand() % 9000 + 1000; // Generate a random 4-digit OTP
}

int main() {
    // Prompt user to enter mobile number
    cout << "Enter your mobile number: ";
    string mobileNumber;
    cin >> mobileNumber;

    // Generate OTP
    int otp = generateOTP();

    // Display OTP
    cout << "OTP sent to " << mobileNumber << " is: " << otp << endl;

    return 0;
}
