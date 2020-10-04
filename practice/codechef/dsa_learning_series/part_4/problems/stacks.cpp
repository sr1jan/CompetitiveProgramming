#include <iostream>
#include <vector>


int binarySearch(std::vector<int> arr, int val){
  if (arr.empty()) return -1;

  int hi = arr.size() - 1;
  int lo = 0;
  int ans = -1;

  while(lo<=hi){
    int mid = lo + (hi - lo)/2;
    if(arr[mid] > val){
      ans = mid;
      hi = mid - 1;
    }else{
      lo = mid + 1;
    }
  }
  return ans;
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int t;
  std::cin>>t;
  while(t--) {
    int n; 
    std::cin>>n;
    std::vector<int> arr;
    int max = 0;
    for(int i=0, val; i<n; ++i){
      std::cin>>val;
      if(val>=max){
        arr.emplace_back(val);
        max = val;
        continue;
      }
      int idx = binarySearch(arr, val);
      if(idx>=0) arr[idx] = val;
      else arr.emplace_back(val);
    }

    std::cout << arr.size() << ' ';
    for(int x: arr) std::cout << x << ' ';
    std::cout << '\n';
  }
}
