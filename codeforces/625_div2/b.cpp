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
bool sortinrev(const pair<int,int> &a, const pair<int,int> &b){ 
       return (a.first > b.first); 
} 

void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>> b;
    for(int i=0; i<n; i++){
        int tmp;
        cin >> tmp;
        b.pb(mp(tmp, i+1));
    }

    if(n==1){
        cout << b[0].first << endl;
        return;
    }

    ll sc=0L;
    ll m=0L;
    set<int> r;
    int a=0, j=0;
    while(a<n-1){
        int i = a;
        while(i<n-1){
            bool f = false;
            set<int> rt;
            for(j=i+1; j<n; j++){
                if((b[j].first-b[i].first)==(b[j].second-b[i].second)){
                    r.insert(b[i].second);
                    r.insert(b[j].second);
                    f = true;
                    break;
                }
            }
            if(f){
                i = j; 
            }else{
                i+=1;
            }
        }
        for(auto in: r){
            /* cout << in << ' '; */
            sc += b[in-1].first;
        }
        /* cout << '\n' << sc << endl; */
        if(m<sc) m = sc;
        sc=0;
        r.clear();
        a+=1;
    }

    /* cout << '\n'; */
    cout << m << endl;
    return;
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    /* auto start = chrono::high_resolution_clock::now(); */ 

    solve();

    /* auto end = chrono::high_resolution_clock::now(); */ 
    /* double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count(); */ 
    /* cout << time_taken*1e-9 << setprecision(9) << endl; */

}
