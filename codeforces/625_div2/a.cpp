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

    int n;
    cin>>n;
    vector<int> r(n), b(n);
    int r_1=0, b_1=0;
    for(int i=0; i<n; i++){
        cin >> r[i];
        if(r[i]) r_1+=1;
    }
    for(int i=0; i<n; i++){
        cin >> b[i];
        if(b[i]) b_1+=1;
    }

    if(r == b){
        cout << -1 << endl;
    }else if(r_1>b_1){
        cout << 1 << endl;
    }else{
        int or1=0, sr1=0;
        for(int i=0; i<n; i++){
            if(r[i]==1&&b[i]==0){
                or1+=1;
            }else if(r[i]==1&&b[i]==1){
                sr1+=1;
            }
        }

        int l = b_1 + 1 - sr1;

        if(or1==0){
            cout << -1 << endl;
        }else if(or1==1){
            cout << l << endl;
        }else{
            cout << (l/or1) + 1 << endl;
        }
    }


}
