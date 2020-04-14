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
        int n,m;
        cin>>n>>m;
        int a[n];
        int p[m];

        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        for(int i=0; i<m; i++){
            int tmp=0;
            cin >> tmp;
            p[i] = tmp-1;
        }

        sort(p, p+m);
        for(int i=0; i<m-1; i++){
            
        }

        if(is_sorted(a, a+n)){
            cout << "YES" << endl;
            continue;
        }

        int ans=1;
        for(int i=0; i<m; i++){
            if(a[p[i]] < a[p[i]+1]){
                ans=0;
                break;
            }
        }

        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;

    }


}
