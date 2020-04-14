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

ll gcd(ll a, ll b) {if(a==0) return b; return gcd(b%a, a);}

void solve(){
    int n,m;
    cin>>n>>m;
    ll ans=1L;
    ll num[n];
    for(int i=0; i<n; i++){
        cin >> num[i];
    }

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            ans *= (ll)abs(num[i] - num[j])%m;
            if(ans==0){
                cout << 0 << endl;
                return;
            }
        }
    }

    cout << ans%m << endl;
    return;
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    /* auto start = chrono::high_resolution_clock::now(); */ 

    solve();

/*     auto end = chrono::high_resolution_clock::now(); */ 
/*     double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count(); */ 
/*     cout << time_taken*1e-9 << setprecision(9) << endl; */


}
