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

ll subseq(vector<ll> &a, ll k){
    unordered_map<ll, ll> count;
    ll res=0;
    ll cursum=0;
    for(int i=0; i<sz(a); i++){
        cursum += a[i];
        if(cursum==k)
            res+=1;
        res += count[cursum-k];
        ++count[cursum];
    }

    return res;
}

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    ll c=0;
    for(int i=0, ai; i<n; ++i){
        cin>>ai;
        a[i]=abs(ai);
        if((a[i]%4)==0) a[i] = 2;
        else if(a[i]&1) a[i] = 0;
        else a[i] = 1;
    }

    /* for(auto i: a) cout << i << ' '; */
    /* cout << endl; */

    c = subseq(a, 1);
    cout << ((n*(n+1))/2) - c << endl;
    
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    /* auto start = chrono::high_resolution_clock::now(); */ 
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    /* auto end = chrono::high_resolution_clock::now(); */ 
    /* double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count(); */ 
    /* time_taken *= 1e-9; */ 
    /* cout << time_taken << setprecision(9) << endl; */ 
}
