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
        int n, k;
        cin>>n>>k;
        vector<ll> a(n+1);
        vector<bool> p(n+1);
        for(int i=1, ai; i<n+1; i++){
            if(i==1||i==n) p[i] = 0;
            cin>>ai;
            a[i]=ai;
        }

        for(int i=2; i<n; i++){
            if(a[i]>a[i-1] && a[i]>a[i+1]) p[i] = 1;
        }

        pair<int,int> idx;
        int maxsum=0;
        int fi=0;
        for(int i=1; i<k+1; i++){
            maxsum += p[i];
            /* if(p[i]&&fi<1){ */
            /*     idx.fi = i-1; */
            /*     ++fi; */
            /* } */
            /* else if(p[i]&&fi>0){ */
            /*     idx.se = i; */
            /*     ++fi; */
            /* } */
        }
        idx = mp(1, k);

        int wsum=maxsum;
        for(int i=k+1; i<n+1; i++){
            wsum += p[i] - p[i-k];
            if(wsum>maxsum){
                maxsum=wsum;
                idx = mp(i-k+1, i);
            }
        }

        if(p[idx.fi]&&p[idx.se] || p[idx.fi]){
            idx.fi-=1;
            idx.se-=1;
            --maxsum;
            while(!p[idx.se-1]&&idx.fi>0){
                idx.fi-=1;
                idx.se-=1;
            }
        }else if(p[idx.se]){
            idx.fi+=1;
            idx.se+=1;
        }

        /* cout << maxsum+1 << ' ' << idx.fi << ',' << idx.se << endl; */
        cout << maxsum+1 << ' ' << idx.fi << endl;
    }
}
