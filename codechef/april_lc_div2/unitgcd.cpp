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

const int mxN = 1e6+1;
/* vector<int> spf(mxN); */
vector<unordered_set<int>> pf(mxN);
vector<bool> primes(mxN, true);

void sieve(){
    /* for(int i=2; i<mxN; i++) spf[i] = i; */
    for(int i=2; i<sqrt(mxN); i++){
        if(primes[i]){
            for(int j=i+i; j<mxN; j+=i){
                pf[j].emplace(i);
                /* if(spf[j]==j){ */
                /*     pf[j].emplace(i); */
                /*     spf[j] = i; */
                /* } */
                /* if(spf[j]!=j&&spf[j]!=i){ */
                /*     pf[j].emplace(i); */
                /* } */
                primes[j] = false;
            }
        }
    }
}

void solve(){
    int n;
    cin>>n;
    vector<vector<int>> p_list;

    // primes list
    /* p_list.pb(sieve(n+1, notseen, nseen)); */
    vector<int> p{1};
    for(int i=2; i<=n; i++){
        if(primes[i]) p.pb(i);
    }
    p_list.pb(p);

    int b=2;
    bool pass=false;
    vector<bool> seen(n+1, false); 
    while(true){
        vector<int> sub;
        for(auto i: p_list[0]){
            if(i==1) continue;
            int pwr = (int)(pow(i, b)+0.5); 
            if(pwr>n) break;
            pass=true;
            sub.pb(pwr);
            seen[pwr] = true;
            /* cout << i << ' '; */
            /* cout << pwr << ' '; */
        }
        /* cout << endl; */
        if(!pass) break;
        p_list.pb(sub);
        if(sz(sub)==1) break;
        pass=false;
        ++b;
    }

    int odd=0;
    vector<int> remain;
    for(int i=0; i<=n; i++){
        if(!seen[i]&&!primes[i]){
            if(i%2!=0){
                ++odd;
                remain.pb(i);
            }else if(i%2==0&&odd>0){
                --odd;
                remain.pb(i);
            }else{
                p_list.pb(vector<int>{i});
            }
        }
    }

    /* cout << sz(remain) << endl; */

    /* for(auto i: pf[14]){ */
    /*     cout << i << ' '; */
    /* } */
    /* cout << endl; */

    /* for(int i=0; i<sz(p_list[0]); i++){ */
    /*     cout << p_list[0][i] << "- "; */
    /* } */
    /* cout << endl; */

    /* for(auto i: remain){ */
    /*     cout << i << " - "; */
    /* } */
    /* cout << endl; */

    for(int j=0; j<sz(remain); j++){
        unordered_set<int> taken;
        vector<int> sub;
        if(seen[remain[j]]) continue;
        for(int i=j; i<sz(remain); i++){ 
            if(seen[remain[i]]) continue;
            bool match=false;
            for(auto t: taken){
                bool found=false;
                for(auto f: pf[remain[i]]){
                    if(pf[t].count(f)){
                        found=true;
                        break;
                    }
                }
                if(found){
                    match=true;
                    break;
                }
            }
            if(match) continue;
            taken.emplace(remain[i]);
            seen[remain[i]] = true;
            sub.pb(remain[i]);
        }
        p_list.pb(sub);
    }

    /* for(int i=0; i<n; i++){ */
    /*     if(!seen[i]&&!primes[i]) p_list.pb(vector<int>{i}); */
    /* } */

    cout << sz(p_list) << '\n';
    for(auto pl: p_list){
        cout << sz(pl) << ' ';
        for(auto p: pl) cout << p << ' ';
        cout << '\n';
    }

}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    sieve();
    auto start = chrono::high_resolution_clock::now(); 
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    auto end = chrono::high_resolution_clock::now(); 
    double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count(); 
    time_taken *= 1e-9; 
    cout << time_taken << setprecision(9) << endl; 
    
}
