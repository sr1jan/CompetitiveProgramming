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

float roundTo2(float num) {
    return (float)((int)(num*100+.5)) / 100;
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    float time = 9.58;
    int t;
    cin>>t;
    while(t--){
        float v, k1, k2, k3;
        cin>>k1;cin>>k2;cin>>k3;cin>>v;
        float speed = k1*k2*k3*v;
        if(roundTo2(100/speed) < time) cout << "YES" << endl;
        else cout << "NO" << endl;
    } 
}
