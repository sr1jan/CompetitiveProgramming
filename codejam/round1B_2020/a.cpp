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

void solve(){
    ll X, Y;
    cin>>X>>Y;
    string ans;

    ll x=abs(X), y=abs(Y);
    if(((x ^ y) & 1) || (!x&&!(y&1)) || (!y&&!(x&1))){
        cout << "IMPOSSIBLE" << endl;
        return;
    }

    if(x%2!=0 && x!=0){
        ans = "W";
        x += 1;
    }
    if(y%2!=0 && y!=0){
        ans = "S";
        y += 1;
    }



}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t;
    cin>>t;
    int ti=0;
    while(t--){
        ++ti;
        

        cout << "Case #" << ti << ": ";
        solve();
    }

}
