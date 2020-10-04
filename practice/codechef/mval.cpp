#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> arr(n);
    long long sum = 0, c=0;
    for(int i=0; i<n; ++i){
      cin>>arr[i];
      if(arr[i]>0) sum+=arr[i], ++c;
    }
    cout << sum << '\n';

    if(!c || c==n){
      cout << 0 << '\n';
      continue;
    }

    vector<int> left, right;
    int l=0, r=n-1;
    while(l<r){
      while(arr[l]<0 && l<n) ++l;
      while(arr[r]>0 && r>=0) --r;
      if(l<r){
        left.emplace_back(l+1);
        right.emplace_back(r+1);
        ++l;
        --r;
      }
    }
    reverse(right.begin(), right.end());
    cout << left.size() + right.size();
    for(int i: left) cout << ' ' << i;
    for(int i: right) cout << ' ' << i;
    cout << '\n';
  }
}
