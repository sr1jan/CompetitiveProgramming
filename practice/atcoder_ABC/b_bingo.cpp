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

    int num[3][3];
    int seen[3][3];
    memset(seen, 0, sizeof seen);
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> num[i][j];
        }
    }

    int n; 
    cin>>n;
    while(n--){
        int in;
        cin >> in;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                if(num[i][j]==in){
                    seen[i][j]=1;
                }
            }
        }
    }

    /* for(int i=0; i<3; i++){ */
    /*     for(int j=0; j<3; j++){ */
    /*         cout << num[i][j] << ' '; */
    /*     } */
    /*     cout << endl; */
    /* } */

    bool ans = false;
    for(int i=0; i<3; i++){
        if(seen[i][0] && seen[i][1] && seen[i][2]) ans = true;
    }
    for(int i=0; i<3; i++){
        if(seen[0][i] && seen[1][i] && seen[2][i]) ans = true;
    }

    if(seen[0][0] && seen[1][1] && seen[2][2]) ans = true;
    if(seen[0][2] && seen[1][1] && seen[2][0]) ans = true;

    if(ans){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

}
