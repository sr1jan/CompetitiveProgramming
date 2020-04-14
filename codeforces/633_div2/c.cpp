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

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    unordered_map<int,int> dif;
    bool ok = true;
    for(int i=0, ai; i<n; i++){
        cin>>ai;
        a[i] = ai;
        if(i>0&&((a[i]<a[i-1]) || (dif[i-1]+a[i-1])>a[i])){
            dif[i] = abs(a[i]-(dif[i-1]+a[i-1]));
            ok = false;
        } 
    }
    if(ok){
        cout << 0 << endl;
        return;
    }

    int mx=0;
    for(auto i: dif){
        mx = (i.se>mx) ? i.se : mx;
        /* if(i.se % 2 != 0 && i.se>0){ */
        /*     dif[i.fi] -= 1; */ 
        /* }else if(i.se==0){ */
        /*     dif.erase(i.fi); */
        /* } */
    }

    int ans = (mx%2==0) ? log2(mx)+1 : ceil(log2(mx));
    cout << (ans==0?1:ans) << endl;
    
    /* for(auto i: dif){ */
    /*     cout << i.fi << ' ' << i.se << endl; */
    /* } */
    /* cout << endl; */
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
