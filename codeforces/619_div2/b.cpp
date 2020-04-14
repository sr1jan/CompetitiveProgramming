#include <bits/stdc++.h>

using namespace std;

int * mostFrequent(long long int arr[], int n) 
{ 
    // Insert all elements in hash. 
    unordered_map<int, int> hash; 
    for (int i = 0; i < n; i++){
        if (arr[i] == -1) continue;
        hash[arr[i]]++; 
    }
  
    // find the max frequency 
    int *anss;
    anss = new int;
    int max_count = 0, res = -1; 
    for (auto i : hash) { 
        if (max_count < i.second) { 
            res = i.first; 
            max_count = i.second; 
        } 
    } 
    anss[0] = res;
    res = -1, max_count = 0;
    for (auto i : hash) { 
        if (i.first != anss[0]){
            if (max_count < i.second) { 
                res = i.first; 
                max_count = i.second; 
            } 
        }
    }
    anss[1] = res;

    return anss; 
} 

int main(){
    long long int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;

        long long int arr[n];
        for (int i=0; i<n; i++){
            scanf("%lld", &arr[i]);
        }

        int *ans;
        ans = mostFrequent(arr, n);
        unordered_map<int, int> freq; 
        vector<pair<int, int>> comb;
        long long int m=0, res, tmp;
        for (int k=ans[0]; k<ans[1]; k++){
            int val = 0;
            for(int i=0; i<n-1; i++){
                if (arr[i]!=-1&&arr[i+1]!=-1){
                    tmp = abs(arr[i] - arr[i+1]);
                }else if(arr[i]==-1&&arr[i+1]==-1){
                    tmp = 0;
                }else if(arr[i]==-1&&arr[i+1]!=-1){
                    tmp = abs(k - arr[i+1]);
                }else if(arr[i]!=-1&&arr[i+1]==-1){
                    tmp = abs(arr[i]-k);
                }

                val = k;

                freq[tmp]++;
            }
            long long int max_count = 0, res = -1; 
            for (auto i : freq) { 
                if (max_count < i.second) { 
                    res = i.first; 
                    max_count = i.second; 
                } 
            }

            comb.push_back(make_pair(res, val));
        }

        delete ans;

        for(auto i: comb){
            cout << i.first << ' ' << i.second << endl;
        }

    }

}
