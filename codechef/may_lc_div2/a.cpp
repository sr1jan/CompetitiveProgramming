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
        int n;
        cin>>n;
        int p[n];
        int mn=1e6, mx=0;
        int rec=1;
        for(int i=0, pi; i<n; i++){
            cin>>p[i];
            if(i>0){
                if((p[i]-p[i-1])<=2){
                    ++rec;
                }else{
                    mx = max(mx, rec);
                    mn = min(mn, rec);
                    rec = 1;
                }
            }
        }
        if(rec>1){
            mx = max(mx, rec);
            mn = min(mn, rec);
            rec = 1;
        }

        cout << mn << ' ' << mx << endl;

    }
}
