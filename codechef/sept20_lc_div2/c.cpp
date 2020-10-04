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

long long sigma_seq(long long n){
  return n * (n+1)/2;
}

long long bs_middle(long long lo, long hi, long long val){
  long long ans=lo;
  while(lo<hi){
    long long mid = lo + (hi-lo)/2;
    long long sigmaMid = sigma_seq(mid);
    if(sigmaMid == val) return mid;
    else if(sigmaMid < val){
      ans = mid;
      lo = mid+1;
    }else{
      hi = mid;
    } 
  }
  return ans;
}

long long nC2(long long n){
  return n * (n-1)/2;
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
      long long n;
      cin>>n;
      long long sigmaN = sigma_seq(n);
      if(sigmaN&1) {
        cout << 0 << '\n';
        continue;
      }
      long long swaps = 0;
      long long m = bs_middle(n/2, n, sigmaN/2);
      long long offset = (sigmaN - 2*sigma_seq(m))/2;
      if(!offset){
        swaps+=nC2(m);
        if(n-m > 1) swaps+=nC2(n-m);
        swaps += n-m;
      }else{
        swaps += n-m;
      }
      cout << swaps << '\n';
    }
}
