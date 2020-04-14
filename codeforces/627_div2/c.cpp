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

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;

        if(s.length()==1){
            if(s[0]=='L'){
                cout << 2 << '\n';
                continue;
            }else{
                cout << 1 << '\n';
                continue;
            } 
        }

        int lc = count(all(s), 'L');
        if(lc==0){
            cout << 1 << '\n';
            continue;
        }else if(lc==s.length()){
            cout << s.length()+1 << '\n';
            continue;
        }

        int c=1, d=1;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='L'){
                ++c;
            }else{
                d = max(d, c);
                c = 1;
            }
        }

        if(c>0){
            d = max(d, c);
        }

        cout << d << '\n';

    }

}
