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
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        set<int> a;
        for(int i=0, v; i<n; i++){
            cin>>v;
            a.insert(v);
        }

        vector<int> av(all(a));

        /* if(x>*a.rbegin()){ */
        /* } */

        int ans=0;
        for(int i=0; i<sz(a)-1; i++){
            if(x==0){
                ans=av[i+1];
                break;
            }
            if(i<1){
                x-=1;
                ans=av[i];
            }else{
                x-=av[i+1]-av[i]-1;
                ans=av[i];
            }
        }

        if(x>0) ans+=x;
        cout << ans << endl;
    }

}
