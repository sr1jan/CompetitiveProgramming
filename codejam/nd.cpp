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

void solve(){
    string s;
    cin>>s;
    string ans="";

    if(s.length()==1){
        int d;
        d = (int)s[0] - 48;
        string pre(d, '(');
        string suf(d, ')');
        cout << pre << s << suf << endl;
        return;
    }

    string ss;
    for(ll i=0; i<s.length()-1; i++){
        if(s[i]==s[i+1]){
           ss+=s[i]; 
           if(i==s.length()-2){
                int d;
                d = (int)s[i] - 48;
                string pre(d, '(');
                string suf(d, ')');
                ans+= pre + ss + s[i+1] + suf;
           }
           continue;
        }else{
            ss+=s[i];

            int d;
            d = (int)s[i] - 48;
            string pre(d, '(');
            string suf(d, ')');
            ans+= pre + ss + suf;
            if(i==s.length()-2){
                string pre((int)s[i+1]-48, '(');
                string suf((int)s[i+1]-48, ')');
                ans+= pre + s[i+1] + suf;
            }

            ss="";
        }
    }

    cout << ans << endl;

}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    ll t, ti=0;
    cin>>t;
    while(t--){
        ti+=1;
        cout << "Case #" << ti << ": ";
        solve();
    }

}
