#include <iostream>

int main() {
  while (1) {
    int num;
    std::cin >> num;
    
    if (num == 42) return 0;
    std::cout << num << std::endl;
  }
}
