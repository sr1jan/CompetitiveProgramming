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

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int m;
        cin>>m;
        vector<int> n(m), b(m);
        for(int i=0; i<m; i++){
            cin >> n[i];
        }
        for(int i=0; i<m; i++){
            cin >> b[i];
        }

        sort(all(n));
        sort(all(b));
        for(auto i: n){
            cout << i << ' ';
        }
        cout << endl;
        for(auto i: b){
            cout << i << ' ';
        }
        cout << endl;

    }

}