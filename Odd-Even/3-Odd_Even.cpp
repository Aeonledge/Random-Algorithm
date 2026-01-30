#include <iostream>

int main(){
  int number;
  std::cout << "Enter integer to check: ";
  std::cin >> number;

  std::cout << "Its " << (const char*[]){"even", "odd"}[number&1];
}
