#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int t;
  std::cin>>t;
  while(t--) {
    int n;
    std::cin>>n;
    long long low = 1e10;
    int c=0;
    for(long long i=0, num; i<n; i++){
      std::cin>>num;
      low = (low<num) ? low : num;
      if(num<=low) ++c;
    }

    std::cout << c << '\n';
  }
}
