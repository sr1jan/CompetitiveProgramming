/* 
 * Author: sr1jan
 * I shall taste the blood...
 *
*/
#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define mp make_pair
#define pb push_back

typedef long long ll;
// global 

// timer code
/* auto start = chrono::high_resolution_clock::now(); */ 
/* auto end = chrono::high_resolution_clock::now(); */ 
/* double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count(); */ 
/* time_taken *= 1e-9; */ 
/* cout << time_taken << setprecision(9) << endl; */ 

ll gcd(ll a, ll b) {if(a==0) return b; return gcd(b%a, a);}

bool p_se_sort(pair<int,int> a, pair<int,int> b){
    return a.second<b.second;
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int arr[n];
      for(int i=0; i<n; ++i){
        cin>>arr[i];
      } 

      int mx=0, mn=10;
      for(int i=0; i<n; ++i){
        bool inf[n] = {0};
        inf[i] = 1;
        vector<int> arr_cpy(arr, arr+n);
        for(int i=0; i<n-1; ++i){
          for(int j=0; j<n-i-1; ++j){
            if(arr_cpy[j]>arr_cpy[j+1]){
              if(max(inf[j], inf[j+1])) inf[j] = 1, inf[j+1] = 1;
              swap(arr_cpy[j], arr_cpy[j+1]);
            }
          }
        }
        int c = count(inf, inf+n, 1);
        mx = max(mx, c), mn = min(mn, c);
      }
      cout << mn << ' ' << mx << endl;
    }
}
