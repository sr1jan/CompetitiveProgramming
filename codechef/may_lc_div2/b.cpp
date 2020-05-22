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

    int t;
    cin>>t;
    while(t--){
        int n, q;
        cin>>n>>q;
        string s;
        cin>>s;
        unordered_map<char, int> cnt;
        for(auto i: s) ++cnt[i];

        unordered_map<int, int> freq;
        for(auto i: cnt){
            /* cout << i.fi << ' ' << i.se << endl; */
            ++freq[i.se];
        }
        /* cout << endl; */

        /* for(auto i: freq) cout << i.fi << ' ' << i.se << endl; */

        for(int i=0, c; i<q; i++){
            cin>>c;
            int sm=0;
            for(auto i: freq){
                if(i.fi<c) sm+=i.fi * i.se;
                else sm+=c * i.se;
            }

            cout << n - sm << endl;
        }
    }

}
