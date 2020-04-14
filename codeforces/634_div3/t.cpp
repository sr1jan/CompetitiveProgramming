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

inline bool ss(ll n){
    if((n%4)==2||(n%4)==-2) return false;
    return true;
}

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> dp(n);
    ll c=0;
    for(int i=0, ai; i<n; ++i){
        cin>>ai;
        if(ss(ai)) ++c;
        a[i]=ai;
        dp[i]=ai%4;
    }

    int k=2;
    int cnt=0;
    while(k<=n){
        /* cout << "K: " << k << endl; */
        for(int i=0; i<=n-k; i++){
            ++cnt;
            if(dp[i+(k-1)]==0){
                ++c;
                continue;
            }
            dp[i+(k-1)] = (dp[i+(k-1)] * (a[i]%4)) % 4;
            if(ss(dp[i+(k-1)])) ++c;
        }
        ++k;
    }
    cout << "ran: " << cnt << endl;
    /* cout << c << '\n'; */
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        solve();
    }

}
