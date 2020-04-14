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
        int n, p;
        cin>>n>>p;
        vector<int> d(n), ans(n);
        for(int i=0; i<n; i++){
            cin>>d[i];
        }

        bool ok = true;
        for(int i=0; i<n; i++){
            int md = p%d[i];
            if(md!=0){
                ok = false;
                ans[i] = p/d[i] + 1;
                break;
            }else{
               if(i>0&&d[i]%d[i-1]!=0){
                    ok = false;
                    ans[i] = 1;
                    ans[i-1] = (p-d[i])/d[i-1] + 1;
                    break;
               }
            }
        }

        if(ok){
            cout << "NO" << endl;
        }else{
            cout << "YES" << ' ';
            for(auto i: ans) cout << i << ' ';
            cout << endl;
        }
    }
}

