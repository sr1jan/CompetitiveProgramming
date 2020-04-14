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
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef double db;
// global 

ll gcd(ll a, ll b) {if(a==0) return b; return gcd(b%a, a);}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        ll n,x,y;
        cin>>n>>x>>y;

        ll min_r = x+y-n+1;
        ll max_r = x-1+y-1+1;

        cout << max(1LL, min(min_r, n)) << ' ' << max(1LL, min(max_r,n)) << endl;

    }

}

