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
    vector<tuple<int,int,int>> act;
    vector<pair<int, char>> ans;
    for(int i=0, s, e; i<n; i++){
        cin>>s>>e;
        act.pb(make_tuple(s, e, i));
    }
    sort(all(act));

    int c=0, j=0;
    bool ok = true;
    for(int i=0; i<n; i++){
        if(c<=get<0>(act[i])){
            ans.pb(mp(get<2>(act[i]), 'C'));
            c=get<1>(act[i]);
        }else if(j<=get<0>(act[i])){
            ans.pb(mp(get<2>(act[i]), 'J'));
            j=get<1>(act[i]);
        }else{
            ok = false; break;
        }
    }

    sort(all(ans));

    if(!ok){
        cout << "IMPOSSIBLE" << endl;
    }else{
        for(auto i: ans){
            cout << i.se;
        }
        cout << endl;
    }

}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t, ti=0;
    cin>>t;
    while(t--){
        ti+=1;
        cout << "Case #" << ti << ": ";
        solve();
    }

}
