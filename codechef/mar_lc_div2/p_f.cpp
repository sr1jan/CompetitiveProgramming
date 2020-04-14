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

bool comp(pair<int,int> a, pair<int,int> b){
    return a.second<b.second;
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int N,M;
        cin>>N>>M;
        int f[N], p[N], f_p[M];
        memset(f_p, 0, sizeof f_p);
        for(int i=0; i<N; i++) cin>>f[i];
        for(int i=0; i<N; i++) cin>>p[i];

        map<int,int> p_f;
        for(int i=0; i<N; i++) 
            p_f[f[i]] += p[i];

        pair<int,int> min = *min_element(all(p_f), comp);
        cout << min.second << endl;

    }

}
