

#include <iostream>
#include <cmath> // For pow function

using namespace std;

int main() {
  // Define base and exponent
  double base ;
  cin>>base;
  int exponent;
  cin>>exponent;

  // Calculate power using pow
  double result = pow(base, exponent);

  // Print the result
  cout << base << "power of " << exponent << " is " << result << endl;

  return 0;
}