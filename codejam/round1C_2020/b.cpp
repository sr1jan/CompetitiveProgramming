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
    int u;
    cin>>u;
    vector<pair<ll, string>> qr(1e4);
    for(int i=0; i<1e4; ++i){
        ll q;
        string s;
        cin>>q>>s;
        qr[i].mp(q,s);
    }

    sort(all(qr));

    unordered_map<string, int> key;

    for(auto q:qr){
        if(q.fi<0) continue;
    }
    
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t, ti=0;
    cin>>t;
    while(t--){
        ++ti;
        cout << "Case #" << ti << ": ";
        solve();
    }
}
