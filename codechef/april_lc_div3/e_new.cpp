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
/* #define endl '\n' */

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

    int t;cin>>t;
    while(t--){
        ll N, M; cin>>N;cin>>M;
        ll K; cin>>K;
        ll wSubMat = 0;
        vector<vector<ll>> mat(N, vector<ll>(M));
        vector<vector<ll>> matSum(N, vector<ll>(M));
        for (ll r = 0; r < N; r++) {
            for (ll c = 0; c < M; c++) {
                cin>>mat[r][c];
                ll val = mat[r][c];
                if(val>=K) ++wSubMat;
                if(r==0&&c==0) matSum[r][c] = val;
                else if(r==0&&c>0) matSum[r][c] = matSum[r][c-1] + val;
                else if(r>0&&c==0) matSum[r][c] = matSum[r-1][c] + val;
                else matSum[r][c] = matSum[r-1][c] + matSum[r][c-1] - matSum[r-1][c-1] + val;
            }
        }

        /* cout << endl; */
        /* for (ll r = 0; r < N; r++) { */
        /*     for (ll c = 0; c < M; c++) { */
        /*         cout << matSum[r][c] << '\t'; */
        /*     } */
        /*     cout << endl; */
        /* } */

        for (ll i = N-1; i > 0; i--) {
            for (ll j = M-1; j > 0; j--) {
                ll idx = 0;
                if(i==j && matSum[i][j]/((i+1)*(j+1)) >= K){
                    idx = i+1;
                }else {
                    ll lo = 2, hi = i+1;
                    while(lo<=hi){
                        ll mid = lo + (hi-lo) / 2;

                        /* printf("%lld, %lld, %lld, %lld, %lld\n", lo, mid, hi, i, j); */

                        if(i-mid>=0&&j-mid>=0){
                            ll val = matSum[i][j] - matSum[i-mid][j] - matSum[i][j-mid] + matSum[i-mid][j-mid];
                            if(val/(mid*mid) >= K){
                                idx = mid;
                                lo = mid+1;
                            }
                            else hi = mid-1;
                            /* printf("(%lld, %lld, %lld, %lld, %lld)\n", i, j, matSum[i][j], wSubMat, d); */
                        }else if(j-mid>=0&&i-mid<0){
                            if((matSum[i][j] - matSum[i][j-mid])/(mid*mid) >= K) {
                                idx = mid;
                                lo = mid+1;
                            }
                            else hi = mid-1;
                            /* printf("(%lld, %lld, %lld, %lld, %lld)\n", i, j, matSum[i][j], wSubMat, d); */
                        }else if(i-mid>=0&&j-mid<0) {
                            if( (matSum[i][j] - matSum[i-mid][j])/(mid*mid) >= K){
                                idx = mid;
                                lo = mid+1;
                            }
                            else hi = mid-1;
                            /* printf("(%lld, %lld, %lld, %lld, %lld)\n", i, j, matSum[i][j], wSubMat, d); */
                        }else hi = mid-1;
                    }
                }
                /* printf("%lld, %lld, idx: %lld\n", i, j, idx); */
                if(idx > 0) wSubMat += idx - 2 + 1;
            }
        }
        cout << wSubMat << endl;
    }
}
