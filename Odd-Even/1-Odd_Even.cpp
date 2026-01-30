#include <iostream>
//Simple Check
int main(){
  int number;
  std::cout << "Enter an integer to check: ";
  std::cin >> number;

  if(number % 2 == 0) {
    std::cout << "This number " << number << " is even";
  }
    
  else {
    std::cout << "This number " << number << " is odd";
  }
  
}
