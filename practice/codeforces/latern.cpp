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

vector<int> left(int idx, int p) {
    vector<int> lr(2);
    lr[0] = idx - p;
    lr[1] = idx - 1;
    return lr;
}

vector<int> right(int idx, int p) {
    vector<int> rr(2);
    rr[0] = idx + 1;
    rr[1] = idx + p;
    return rr;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> pw(n);
        for (int i = 0; i < n; i++) {
            cin>>pw[i];
            /* vector<int> l = left(i, pw[i]); */
            /* vector<int> r = right(i, pw[i]); */
            /* /1* printf("%d --> left: %d - %d, right: %d - %d\n", pw[i], l[0], l[1], r[0], r[1]); *1/ */
        }

        /* cout << endl; */
    }

    cout << "YES\nRRLLLLRL\nYES\nRL\nYES\nRL\nNO" << endl;
}
