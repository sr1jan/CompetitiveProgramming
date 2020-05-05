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
    int n, q;
    cin>>n>>q;
    vector<pair<int,int>> req(q+1);
    req[0] = mp(0,0);
    for(int i=1, fi, di; i<=q; i++){
        cin>>fi>>di;
        req[i] = mp(fi, di);
    }

    ll f = 0;
    for(int i=1; i<=q; i++){
        f += abs(req[i].fi - req[i-1].se);
        f += abs(req[i].se - req[i].fi);
    }

    cout << f << endl;

}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
