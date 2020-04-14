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
#define endl '\n'

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
    vector<vector<int>> p_list;

    int i=1;
    if(n&1&&n>=3){
        cout << n/2 << endl;
        cout << 3 << ' ' << 1 << ' ' << 2 << ' ' << 3 << endl;
        i=4;
        for(; i<=n; i++){
            if(i%2==0) cout << 2 << ' ' << i << ' ';
            else cout << i << endl; 
        }
    }else if(n==1) cout << 1 << '\n' << 1 << ' ' << 1 << endl;
    else{
        cout << n/2 << endl;
        i = 1;
        for(; i<=n; i++){
            if(i&1) cout << 2 << ' ' << i << ' ';
            else cout << i << endl; 
        }
   
    }
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

