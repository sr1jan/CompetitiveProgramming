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

ll oddPitSum(ll num) {
    ll val = 0;
    if(num==1) val= 20;
    else if(num==2) val = 36;
    else if(num==3) val = 51;
    else if(num==4) val = 60;
    return val;
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t; cin>>t;
    while(t--){
        ll n;cin>>n;
        if(n<=4){
            cout << oddPitSum(n) << endl;
            continue;
        }else {
            if(n%4==0) cout << ((n/4)*44)+16 << endl; 
            else {
                ll odd = n%4;
                ll ans = ((n/4)*44) + (4*(4-odd)) + oddPitSum(odd);
                cout << ans << endl;
            }
        }
    }
}
