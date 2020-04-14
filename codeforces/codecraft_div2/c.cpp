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
    int n, m, p;
    cin>>n>>m>>p;
    int a[n], b[m];
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<m; i++) cin >> b[i];
    int ai=0, bi=0;
    while(a[ai]%p==0) ++ai;
    while(b[bi]%p==0) ++bi;

    cout << ai+bi << endl;
    return;
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    solve();
    
}
