/*
 * maximum sum from subarrays of length n array
 *
*/

#include <iostream>

using namespace std;

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; ++i)
    cin>>arr[i];

  int ans = arr[0], curMax = arr[0];
  for(int i=1; i<n; ++i){
    curMax = max(arr[i], curMax+arr[i]);
    ans = max(ans, curMax);
  }

  cout << ans << '\n';
}
