#include <iostream>

int main(){
  int options;
  
  while(1){
    std::cout << "Try from 1-4: ";
    std::cin >> options;
    switch(options) {
      case 1:
        std::cout << "Choose number 2 too\n\n";
        break;

      case 2:
        std::cout << "Choose number 3 too\n\n";
        break;

      case 3:
        std::cout << "Choose the first number too\n\n";
        break;

      case 4:
        std::cout << "You Found the Exit";
        return 0;

      default:
        std::cout << "Try Again\n\n";
    }
  }
}
