#include <iostream>
#include <utility>

using namespace std;

pair<int,int> getMinMax(int arr[], int l, int r){
    pair<int,int> mml, mmr, ans;

    if(l==r){
        ans.first = arr[l];
        ans.second = arr[l];
        return ans;
    }

    if((r-l)==1){
        ans.first = (arr[l]<arr[r]) ? arr[l] : arr[r];
        ans.second = (arr[l]>arr[r]) ? arr[l] : arr[r];
        return ans;
    }

    int mid = l + (r-l)/2;
    mml = getMinMax(arr, l, mid);
    mmr = getMinMax(arr, mid+1, r);

    ans.first = (mml.first<mmr.first) ? mml.first : mmr.first;
    ans.second = (mml.second>mmr.second) ? mml.second : mmr.second;

    return ans;

}

int main(){

    pair<int,int> minmax;
    int arr[] = {1,10,50,2,3,9,8,7};
    int n = 8;

    minmax = getMinMax(arr, 0, n-1);
    cout << "MIN: " << minmax.first << endl;
    cout << "MAX: " << minmax.second << endl;

}
