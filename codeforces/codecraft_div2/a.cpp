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
        int n, m;
        cin>>n>>m;
        int scr[n];
        ll s_sum = 0;
        for(int i=0; i<n; i++){
            cin >> scr[i];
            if(i!=0) s_sum += scr[i];
        }

        int m_s = scr[0];
        int s_need = m - m_s;

        if(s_sum>=s_need){
            cout << m << endl;
        }else{
            cout << s_sum+m_s << endl;
        }


    }

}
