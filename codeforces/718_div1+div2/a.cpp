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

    int t;cin>>t;
    while(t--){
        ll n;cin>>n;
        ll ans = -1;
        ll c = 0;
        while(n>=2050){
            ll size = trunc(log10(n)) + 1 - 4;
            ll pow = size <= 0 ? 1 : 10*size;
            cout << n << " " << size << endl;
            if(n - (2050 * pow) == 0){
                ans = 1 + c;
                break;
            }else{
                n = n % (2050 * pow);
                ++c;
            }
        }
        cout << ans << endl;
    }
}
