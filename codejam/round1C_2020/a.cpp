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


int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t, ti=0;
    cin>>t;
    while(t--){
        ++ti;
        int x, y;
        string m;
        cin>>x>>y>>m;

        int sec=0;
        int ans=1e6;
        for(auto s: m){
            ++sec;
            if(s=='N') ++y;
            else if(s=='S') --y;
            else if(s=='E') ++x;
            else if(s=='W') --x;

            if(sec>=abs(x)+abs(y)){
                ans = min(ans, sec);
            }
        }

        cout << "Case #" << ti << ": ";
        if(ans==1e6){
            cout << "IMPOSSIBLE" << endl;
            continue;
        }

        cout << ans << endl;
    }
}
