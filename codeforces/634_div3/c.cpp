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
    int n;
    cin>>n;

    unordered_map<int, int> same;
    unordered_set<int> dif;
    for(int i=0, ai; i<n; i++){
        cin>>ai;
        ++same[ai];
        dif.emplace(ai);
    }

    if(n==1){
        cout << 0 << endl;
        return;
    }

    int size = sz(dif);

    int mx=0;
    for(auto i: same){
        mx = (i.se>mx) ? i.se : mx;
    }

    mx = (mx==size) ? min(size, mx)-1 : min(size,mx);

    cout << mx << endl;

/*     if(size==n||size==1){ */
/*         cout << 1 << endl; */
/*     }else{ */
/*         cout << n-size << endl; */
/*     } */

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
