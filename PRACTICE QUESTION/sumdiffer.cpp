

#include <iostream>

using namespace std;

int main() {
  // Define the matrix size
  const int N = 4;

  // Initialize the matrix with sample values
  int matrix[N][N] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12},
    {13, 14, 15, 16},
  };

  // Variables to store diagonal sums
  int principal_sum = 0, secondary_sum = 0;

  // Loop through the matrix
  for (int i = 0; i < N; i++) {
    // Add elements on the principal diagonal
    principal_sum += matrix[i][i];

    // Add elements on the secondary diagonal (bottom-right to top-left)
    secondary_sum += matrix[i][N - 1 - i];
  }

  // Calculate the difference of diagonal sums
  int difference = principal_sum - secondary_sum;

  // Print the results
  cout << "Principal diagonal sum: " << principal_sum << endl;
  cout << "Secondary diagonal sum: " << secondary_sum << endl;
  cout << "Difference between diagonals: " << difference << endl;

  return 0;
}