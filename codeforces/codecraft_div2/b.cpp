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
    int n;
    cin>>n;
    string s;
    cin>>s;

    pair<string, int> res(mp(s, 1));
    for(int k=2; k<=n; k++){
        string start,end;
        start = s.substr(k-1),  end = s.substr(0, k-1);
        if((n-(k-1))%2==1) reverse(all(end));
        res = min(mp(start+end, k), res);
    }

    cout << res.fi << '\n' << res.se << endl;
    return;
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
