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
    int N, Q;
    scanf("%d %d", &N, &Q);
    vector<int> pts(N);
    for(int i=0; i<N; i++){
        scanf("%d", &pts[i]);
    }

    for(int i=0; i<Q; i++){
        int x1, x2, y;
        scanf("%d %d %d", &x1, &x2, &y);
        int c=0;

        /* cout << x1 << ' ' << x2 << ' ' <<  y << '\n'; */

        for(int i=x1-1; i<x2-1; i++){
            if(pts[i]>y&&pts[i+1]>=pts[i]) continue;
            if(pts[i]<y&&pts[i+1]<=pts[i]) continue;
            if((pts[i]==y&&i==x2)||(pts[i+1]==y&&i==x1)) continue;

            if(y>=min(pts[i], pts[i+1]) && y<=max(pts[i], pts[i+1])){
                ++c;
            }

            /* cout << i<<pts[i] << ' ' << i+1<<pts[i+1] << ' '; */
            /* cout << c << '\n'; */
        }

        printf("%d\n", c);
    }
}

int main(){
    /* ios_base::sync_with_stdio(false); */ 
    cin.tie(NULL);

    int t;
    cin>>t;

    auto start = chrono::high_resolution_clock::now(); 

    while(t--){
        solve();
    }

    auto end = chrono::high_resolution_clock::now(); 
    double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count(); 
    time_taken *= 1e-9; 
    cout << '\n' <<  time_taken << setprecision(9) << endl; 

}
