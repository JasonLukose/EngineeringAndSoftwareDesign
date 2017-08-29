// Code to find average of numbers using an array

#include <iostream>

using namespace std;

int main() {
  //
  // Declare Variables
  //
  // Arrays in C++
  double values_entered[5];
  double sum = 0;
  // Want the first element of values_enetered to 4.5

  for (int i = 0; i < 5; i++) {
    std::cout << "Please enter number" << '\n';
    std::cin >> values_entered[i];
    sum += values_entered[i];
  }

  std::cout << "The average is: " << (sum / 5) << '\n';

  return 0;
}
