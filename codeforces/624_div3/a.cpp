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
    cin >> t;
    while(t--){
        int a, b;
        cin >>a>>b;
        if(a==b){
            cout << 0 << endl;
            continue;
        }

        if(a<b){
            if((b-a)%2==0){
                cout << 2 << endl;
                continue;
            }else{
                cout << 1 << endl;
                continue;
            }
        }else{
            if((b-a)%2==0){
                cout << 1 << endl;
                continue;
            }else{
                cout << 2 << endl;
            }
        }
    }

}
