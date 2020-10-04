#include <iostream> 

int main(){
  int t;
  std::cin>>t;
  while(t--){
    int g;
    std::cin>>g;
    while(g--){
      int i, n, q;
      std::cin>>i>>n>>q;

      if(n%2==0) std::cout << n/2 << std::endl;
      else {
        if (i==q) std::cout << n/2 << std::endl;
        else std::cout << n - n/2 << std::endl;
      }
    }
  }
}
