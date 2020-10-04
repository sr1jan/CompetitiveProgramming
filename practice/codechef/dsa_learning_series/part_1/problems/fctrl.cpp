#include <iostream>

int main() {
  int t;
  std::cin>>t;
  while(t--) {
    int num;
    std::cin>>num;
    int ans=0;
    int div=5;
    while(1){
      int q = num/div;
      if(!q) break;
      ans+=q;
      div *= 5;
    }

    std::cout << ans << std::endl;
  }
}
