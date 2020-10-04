#include <iostream>
#include <vector>

long long MAX = 0;
long long C = 0;

void mergeSort(long long arr[  ], int lo, int hi){
  if(lo<hi){
    int mid = lo + (hi - lo)/2;
    mergeSort(arr, lo, mid);
    mergeSort(arr, mid+1, hi);


    // MERGE (in-place)
    int i = lo, k = lo;
    int j = mid+1;
 
    while(i <= mid && j <= hi){
      if(arr[i]%MAX <= arr[j]%MAX){
        arr[k] = arr[k] + (arr[i]%MAX) * MAX;
        ++i;
      }else{
        C += j - k;
        arr[k] = arr[k] + (arr[j]%MAX) * MAX;
        ++j;
      }
      ++k;
    }
    while(i <= mid){
      arr[k] = arr[k] + (arr[i]%MAX) * MAX;
      ++i;
      ++k;
    }
    while(j <= hi){
      arr[k] = arr[k] + (arr[j]%MAX) * MAX;
      ++j;
      ++k;
    }
    for(int i=lo; i<=hi; i++){
      arr[i] = arr[i] / MAX;
    }
  }
}

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(NULL);

  int n;
  std::cin>>n;
  long long arr[n];
  for(int i=0; i<n; ++i) {
    std::cin>>arr[i];
    MAX = std::max(MAX, arr[i]);
  } 

  ++MAX;

  mergeSort(arr, 0, n-1);
  std::cout << C << '\n';
}
