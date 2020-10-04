#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n, m;
  std::cin>>n>>m;
  std::vector<std::pair<int,int>> a;
  std::vector<std::pair<int,int>> b;

  for(int i=0, num; i<n; ++i){
    std::cin>>num;
    a.emplace_back(num, i);
  } 
  for(int i=0, num; i<m; ++i){
    std::cin>>num;
    b.emplace_back(num, i);
  } 

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  for(int i=0; i<m; ++i){
    std::cout << a[0].second << ' ' << b[i].second << '\n';
  }

  for(int i=1; i<n; ++i){
    std::cout << a[i].second << ' ' << b[m-1].second << '\n';
  }

}
