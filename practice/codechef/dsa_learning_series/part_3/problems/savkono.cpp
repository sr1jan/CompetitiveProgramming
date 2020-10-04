#include <iostream>
#include <queue>

int main() {
  int t;
  std::cin>>t;
  while(t--) {
    int n, z;
    std::cin>>n>>z;
    std::priority_queue<int> powers;
    for(int i=0, val; i<n; i++) {
      std::cin>>val;
      powers.emplace(val);
    }

    int count=0;
    while(z>0 && powers.top() != 0){
      ++count;
      int pwr = powers.top();
      z -= pwr;
      pwr /= 2;
      powers.pop();
      powers.emplace(pwr);
    }

    if(z>0) std::cout << "Evacuate" << '\n';
    else std::cout << count << '\n';

  }
}
