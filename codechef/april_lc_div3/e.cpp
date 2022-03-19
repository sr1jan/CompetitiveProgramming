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

    int t;cin>>t;
    while(t--){
        ll N, M; cin>>N;cin>>M;
        ll K; cin>>K;
        ll wSubMat = 0;
        vector<vector<ll>> mat(N, vector<ll>(M));
        vector<vector<ll>> matSum(N, vector<ll>(M));
        for (ll i = 0; i < N; i++) {
            for (ll j = 0; j < M; j++) {
                cin>>mat[i][j];
                ll val = mat[i][j];
                if(val>=K) ++wSubMat;
                if(i==0&&j==0) matSum[i][j] = val;
                else if(i==0&&j>0) matSum[i][j] = matSum[i][j-1] + val;
                else if(i>0&&j==0) matSum[i][j] = matSum[i-1][j] + val;
                else matSum[i][j] = matSum[i-1][j] + matSum[i][j-1] - matSum[i-1][j-1] + val;
            }
        }

        cout << endl;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cout << matSum[i][j] << '\t';
            }
            cout << endl;
        }

        for (ll i = N-1; i > 0; --i) {
            for (ll j = M-1; j > 0; --j) {
                if(i==j) wSubMat = matSum[i][j]/((i+1)*(j+1)) >= K ? wSubMat+1 : wSubMat;
                    /* printf("(%lld, %lld, %lld, %lld)\n", i, j, matSum[i][j], wSubMat); */
                for(ll k = 2; k<=i+1; ++k){
                    if(i-k>=0&&j-k>=0){
                        ll mult = i-k + i;
                        ll val = matSum[i][j] - matSum[i-k][j] - matSum[i][j-k] + matSum[i-k][j-k];
                        wSubMat = (val / (mult*mult)) >= K ? wSubMat+1 : wSubMat;
                        /* printf("(%lld, %lld, %lld, %lld)\n", i, j, matSum[i][j], wSubMat); */
                    }else if(j-k>=0&&i-k<0){
                        ll mult = min(i,j) + 1;
                        wSubMat = ((matSum[i][j] - matSum[i][j-k])/(mult*mult)) >= K ? wSubMat+1 : wSubMat;
                        /* printf("(%lld, %lld, %lld, %lld)\n", i, j, matSum[i][j], wSubMat); */
                    }else if(i-k>=0&&j-k<0) {
                        ll mult = min(i,j) + 1;
                        wSubMat = ((matSum[i][j] - matSum[i-k][j])/(mult*mult)) >= K ? wSubMat+1 : wSubMat;
                        /* printf("(%lld, %lld, %lld, %lld)\n", i, j, matSum[i][j], wSubMat); */
                    }else break;
                }
            }
        }
        cout << wSubMat << endl;
    }
}
