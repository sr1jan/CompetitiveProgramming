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
    string s, r;
    cin>>s>>r;
    vector<ll> gap;
    ll gp=0, k=0, l=0;
    bool first = false;
    for(int i=0; i<s.length(); i++){
        char a=s[i], b=r[i];
        if(a!=b){
            ++l;
            if(!first){
                gp=0;
                first = true;
                continue;
            }
            if(gp>0) gap.pb(gp);
            gp = 0;
        }else{
            ++gp;
        }
    }

    sort(all(gap));
    for(auto i: gap) cout << i << ' ';
    cout << endl;

    ll n = sz(gap);
    k = n+1;
    ll ans = k*l;
    cout << l << ' ' << k << endl;
    for(int i=0; i<n; i++){
        --k;
        l+=gap[i];
        ans = min(ans, k*l);
    }

    cout << ans << endl;

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
