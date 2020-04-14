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
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef double db;
// global 

ll gcd(ll a, ll b) {if(a==0) return b; return gcd(b%a, a);}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c==0){
            cout << 0 << endl;
            continue;
        }
        vi d;
        d.pb(a);
        d.pb(b);
        d.pb(c);

        if(count(all(d), 0) == 2){
            cout << 1 << endl;
            continue;
        }

        if(count(all(d), 0) == 1){
            int g=1;
            for(auto i: d){
                if(i!=0&&i>=2){
                    g+=1;
                }
            }
            cout << g << endl;
            continue;
        }

        int r=1;
        for(auto i: d){
            if(!(i>=4)){
                r=0;
            }
        }
        if(r) {
            cout << 7 << endl;
            continue;
        }

        
    }

}
