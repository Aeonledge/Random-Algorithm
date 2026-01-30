#include <iostream>

int main(){
  int number;
  std::cout << "Enter an integer to check: ";
  std::cin >> number;

  std::cout << "That is " << (number & 1 ? "odd" : "even");
}
