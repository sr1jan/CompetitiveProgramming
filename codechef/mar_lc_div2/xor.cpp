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

bool p_se_sort(pair<int,int> a, pair<int,int> b){
    return a.second<b.second;
}

void solve(int* n_to_bits){
    int t;
    cin>>t;
    while(t--){
        int N,Q;
        cin>>N>>Q;
        int a[N];
        for(int i=0; i<N; i++) cin>>a[i];
        for(int i=0; i<Q; i++){
            int p,even=0;
            cin>>p;
            for(int i=0; i<N; i++){
                if(p==a[i]){
                    ++even;
                }else{
                    int one = n_to_bits[p] + n_to_bits[a[i]];
                    /* int one=0; */
                    /* // Brian Kernighan’s Algorithm: O(logn) */
                    /* while(xr){ */
                    /*     xr &= (xr-1); */
                    /*     ++one; */
                    /* } */
                    if(!(one&1)) ++even;
                }
            }
            cout << even << ' ' <<  N-even << '\n';
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    /* auto start = chrono::high_resolution_clock::now(); */ 

    int t;
    cin>>t;
    while(t--){
        int N,Q;
        cin>>N>>Q;
        unordered_multiset<int> a; 
        for(int i=0; i<N; i++){
            int ai;
            cin>>ai;
            if(!(__builtin_popcount(ai)&1)) a.insert(1);
            else a.insert(0);
        }

        int e=a.count(1), o=a.count(0);

        for(int i=0; i<Q; i++){
            int p;
            cin>>p;
            if(!(__builtin_popcount(p)&1)) cout << e << ' ' << o << '\n';
            else cout << o << ' ' << e << '\n';
        }
    }

    /* auto end = chrono::high_resolution_clock::now(); */ 
    /* double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count(); */ 
    /* time_taken *= 1e-9; */ 
    /* cout << time_taken << setprecision(9) << endl; */ 

}
