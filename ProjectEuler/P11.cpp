#include <iostream>

using namespace std;

// max product from subarrays with window size k
// using sliding window approach ~ O(n)
int maxProd(int *arr, int n, int k){
  if(n<k) return 0;

  int res = 1;
  for(int i=0; i<k; ++i){
    res *= arr[i];
  }

  res = res == 0 ? 1 : res;
  int currMax = res;
  for(int i=k; i<n; ++i){
    currMax *= arr[i];
    // prevents divide by zero
    if(arr[i-k] != 0) currMax /= arr[i-k];
    res = max(currMax, res);
    currMax = currMax == 0 ? 1 : currMax;
  }

  return res;
}

int main(){
  int numGrid[20][20];

  // input ~ O(n^2)
  for(int i=0; i<20; ++i)
    for(int j=0; j<20; ++j)
      cin>>numGrid[i][j];

  int ans = 0;

  // linear (up, down, right, left) ~ O(n * 3n)
  for(int i=0; i<20; ++i){
    int row[20], column[20];
    for(int j=0; j<20; ++j){
      row[j] = numGrid[i][j];
      column[j] = numGrid[j][i];
    }
    int rowMax = maxProd(row, 20, 4);
    int columnMax = maxProd(column, 20, 4);
    ans = ans > max(rowMax, columnMax) ? ans : max(rowMax, columnMax);
  }

  // diagonal ~ O(n * 6n)
  for(int i=3; i<20; ++i){
    // diagonal-up
    int primaryUp[i+1], secondaryUp[i+1];
    for(int j=1; j<=i+1; ++j){
      primaryUp[j-1] = numGrid[i-j+1][j-1];
      secondaryUp[j-1] = numGrid[i-j+1][20-j];
    }

    // diagonal-down
    int primaryDown[20-i], secondaryDown[20-i];
    for(int j=1; j<=20-i; ++j){
      primaryDown[j-1] = numGrid[i+j-1][j-1];
      secondaryDown[j-1] = numGrid[i+j-1][20-j];
    }

    int pUp = maxProd(primaryUp, i+1, 4);
    int pDown = maxProd(primaryDown, 20-i, 4);
    int pMax = max(pUp, pDown);

    int sUp = maxProd(secondaryUp, i+1, 4);
    int sDown = maxProd(secondaryDown, 20-i, 4);
    int sMax = max(sUp, sDown);

    ans = ans > max(pMax, sMax) ? ans : max(pMax, sMax);
  }

  cout << ans << '\n';

}
