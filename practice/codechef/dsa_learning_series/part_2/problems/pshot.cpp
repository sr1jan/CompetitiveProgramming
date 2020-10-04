#include <iostream>

int main() {
  int t;
  std::cin>>t;
  while(t--) {
    int n;
    std::string s;
    std::cin>>n>>s;
    std::pair<int,int> scores(0,0);
    std::pair<int,int> atmpts(0,0);
    for(int i=1; i<=2*n; i++){
      if (i==2*n){
        std::cout << i << std::endl;
        break;
      }

      if(i&1){
        atmpts.first += 1;
        scores.first += s[i-1] - '0';
        /* int diff = scores.second - scores.first; */
        /* if(diff > (n - atmpts.first)){ */
        /*   std::cout << i << std::endl; */
        /*   break; */
        /* } */
      }else{
        atmpts.second += 1;
        scores.second += s[i-1] - '0';
        /* int diff = scores.first - scores.second; */
        /* if(diff > (n - atmpts.second)){ */
        /*   std::cout << i << std::endl; */
        /*   break; */
        /* } */
      }

      int diff = abs(scores.first - scores.second);
      if(scores.first > scores.second && diff > (n - atmpts.second)) {
        std::cout << i << std::endl;
        break;
      }
      if(scores.second > scores.first && diff > (n - atmpts.first)) {
        std::cout << i << std::endl;
        break;
      }
    }
  }
}
