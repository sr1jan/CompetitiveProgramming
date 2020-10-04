#include <iostream>

int main(){
  int t;
  std::cin>>t;
  while(t--){
    int num;
    std::cin>>num;

    int first = 1;
    while(num) {
      int tmp=0;
      tmp = num%10;
      if (tmp==0 && first==1){
        num /= 10;
        continue;
      }

      first = 0;
      std::cout << tmp;
      num /= 10;
    }
    std::cout << std::endl;
  }
}
