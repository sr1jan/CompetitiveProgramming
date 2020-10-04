#include <iostream>
#include <string>
#include <unordered_set>

int isLapi(std::string f, std::string s){
  std::unordered_multiset<char> f_set(f.begin(), f.end());
  std::unordered_multiset<char> s_set(s.begin(), s.end());

  int isTrue = 1;
  for(char c = 'a'; c<='z'; c++){
    if(f_set.count(c) != s_set.count(c)){
      isTrue = 0;
      break;
    }
  }

  /* std::cout << f_sum << ' ' << s_sum << std::endl; */

  if(isTrue) return 1;
  else return 0;
}

int main(){
  int t;
  std::cin>>t;
  while(t--){
    std::string s;
    std::cin>>s;
    int sLen = s.length();
    int isTrue;
    if((sLen&1) == 1) isTrue = isLapi(s.substr(0, sLen/2), s.substr((sLen/2) + 1, sLen/2));
    else isTrue = isLapi(s.substr(0, sLen/2), s.substr(sLen/2, sLen/2));

    if(isTrue) std::cout << "YES" << std::endl;
    else std::cout << "NO" << std::endl;
  }
}
