

#include <iostream>
#include <random>
#include <string>

using namespace std;

string generateOTP(int length) {
    // Create a string containing all possible characters for the OTP
    string charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    // Use a standard random number generator for better security
    random_device rd;
    mt19937 generator(rd());
    uniform_int_distribution<int> distribution(0, charset.length() - 1);

    // Generate the OTP characters
    string otp;
    for (int i = 0; i < length; i++) {
        otp += charset[distribution(generator)];
    }

    return otp;
}

int main() {
    int otpLength = 6; // Set desired OTP length (typically 6 or 8 digits)

    string otp = generateOTP(otpLength);

    cout << "Your OTP is: " << otp << endl;

    return 0;
}