#include <iostream>

int main() {
  int t;
  std::cin>>t;
  while(t--){
    int n;
    std::cin>>n;
    long long maxProfit = 0;
    while(n--){
      int s, p, v;
      std::cin>>s>>p>>v;
      long long profit = p/(s+1) * v;
      maxProfit = (maxProfit < profit) ? profit : maxProfit;
    }

    std::cout << maxProfit << std::endl;
  }
}
