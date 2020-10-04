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
      vector<vector<int>> arr(n, vector<int> (n));
      for(int i=0; i<n; ++i)
        for(int j=0; j<n; ++j) cin>>arr[i][j];

      vector<int> parity(n-1);
      int ok=0;
      for(int i=1; i<n; ++i){
        if(arr[0][i] < arr[i][0]){
          ++ok;
          parity[i-1] = 1;
        }else{
          parity[i-1] = 0;
        }
      }

      if(ok==(n-1)){
        cout << 0 << endl;
        continue;
      }

      int c=0, curr=parity[0];
      for(int i=1; i<n-1; ++i){
        if(parity[i]!=curr){
          ++c;
          curr=parity[i];
        }
      }
      if(!parity[n-2]) ++c;

      cout << c << endl;
    }
}
