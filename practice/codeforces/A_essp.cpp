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

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int n;
    string s;
    cin>>n>>s;

    ll ops=0L, c=0L, i=0L;
    for(auto ss: s){
        i = (ss==')') ? i+1 : i;
        c = (ss==')') ? c+1 : c-1;
        if(c==0&&ss!=')'){
            ops += 2*i;
            i = 0L;
        }else if(c==0L&&ss==')'){
            i=0L;
        }
    }

    if(c==0L){
        cout << ops << endl;
    }else{
        cout << -1 << endl;
    }

}
