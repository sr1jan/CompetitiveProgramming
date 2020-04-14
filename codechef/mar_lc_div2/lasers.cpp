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
    int N, Q;
    cin>>N>>Q;
    vector<pair<int,ll>> pts;
    for(int i=0; i<N; i++){
        ll ai;
        cin>>ai;
        pts.pb(mp(i+1,ai));
    }
    for(int i=0; i<Q; i++){
        int x1, x2;
        ll y;
        cin>>x1>>x2>>y;
        pair<int,ll> left(mp(x1,y));
        pair<int,ll> right(mp(x2,y));
        int c=0;
        for(int i=x1-1; i<x2-1; i++){
            if(pts[i].se>y&&pts[i+1].se>=pts[i].se) continue;
            if(pts[i].se<y&&pts[i+1].se<=pts[i].se) continue;
            if(pts[i]==right||pts[i+1]==left) continue;

            if(pts[i].se<pts[i+1].se){
                ll dy = pts[i].se + (pts[i+1].se-pts[i].se);
                if(dy>=y) ++c;
            }else if(pts[i].se>pts[i+1].se){
                ll dy = pts[i].se - (pts[i].se-pts[i+1].se);
                if(dy<=y) ++c;
            }
            /* cout << pts[i].fi<<pts[i].se << ' ' << pts[i+1].fi<<pts[i+1].se << ' '; */
            /* cout << c << '\n'; */
        }

        cout << c << '\n';

    }
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t;
    cin>>t;

    auto start = chrono::high_resolution_clock::now(); 

    while(t--){
        solve();
    }

    auto end = chrono::high_resolution_clock::now(); 
    double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count(); 
    time_taken *= 1e-9; 
    cout << '\n' <<  time_taken << setprecision(9) << endl; 

}
