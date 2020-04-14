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

// length of int number
int lenHelper(unsigned x) {
    if (x >= 1000000000) return 10;
    if (x >= 100000000)  return 9;
    if (x >= 10000000)   return 8;
    if (x >= 1000000)    return 7;
    if (x >= 100000)     return 6;
    if (x >= 10000)      return 5;
    if (x >= 1000)       return 4;
    if (x >= 100)        return 3;
    if (x >= 10)         return 2;
    return 1;
}

ll gcd(ll a, ll b) {if(a==0) return b; return gcd(b%a, a);}

bool p_se_sort(pair<int,int> a, pair<int,int> b){
    return a.second<b.second;
}

ll maxMon(ll n, unordered_map<ll,ll>&dp){
    if(n<1) return 0;
    if(n==1) return 1;
    if(dp.count(n)) return dp[n];

    ll sub = maxMon(n/2,dp)+maxMon(n/3,dp)+maxMon(n/4,dp);
    return dp[n] = max(n, sub);
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(0), cout.tie(0);

    /* auto start = chrono::high_resolution_clock::now(); */ 

    unordered_map<ll,ll> dp;
    ll n;
    /* cin>>n; */
    /* cout << maxMon(n, dp) << endl; */
    while(cin>>n){
        cout << maxMon(n, dp) << endl;
    }

    /* auto end = chrono::high_resolution_clock::now(); */ 
    /* double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count(); */ 
    /* time_taken *= 1e-9; */ 
    /* cout << time_taken << setprecision(9) << endl; */ 

}
