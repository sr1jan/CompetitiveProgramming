#include <iostream>
#include <algorithm>

int main() {
  int nCust;
  std::cin>>nCust;
  long long prices[nCust];
  for(int i=0; i<nCust; i++) std::cin>>prices[i];
  std::sort(prices, prices+nCust);

  long long maxRev = 0;
  for(int i=0; i<nCust; i++){
    long long rev = prices[i] * (nCust - i);
    maxRev = (maxRev < rev) ? rev : maxRev;
  }

  std::cout << maxRev << std::endl;
}
