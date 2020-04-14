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

    int t, ti=0;
    cin>>t;
    while(t--){
        ti+=1;
        int n, trace=0, r=0, c=0;
        cin>>n;
        vector<vector<int>> m(n, vector<int>(n));
        for(int i=0; i<n; i++){
            unordered_set<int> row;
            for(int j=0; j<n; j++){
                cin>>m[i][j];
                row.insert(m[i][j]);
                if(i==j) trace+= m[i][i];
            }
            if(sz(row)!=n) r+=1;
        }

        for(int i=0; i<n; i++){
            unordered_set<int> col;
            for(int j=0; j<n; j++){
               col.insert(m[j][i]); 
            }
            if(sz(col)!=n) c+=1;
        }

        cout << "Case #" << ti << ": " << trace << ' ' << r << ' ' << c << endl;

    }
}
