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
        int n;
        cin>>n;
        string x, a, b;
        cin>>x;
        a='1', b='1';
        bool ok=false;
        for(int i=1; i<n; i++){
            if(ok){
                if(x[i]=='2'){
                    a+='2', b+='0';
                }else if(x[i]=='1'){
                    a+='1', b+='0';
                }else{
                    a+='0', b+='0';
                }
            }else{
                if(x[i]=='2'){
                    a+='1', b+='1';
                }else if(x[i]=='1'){
                    a+='0', b+='1';
                    ok=true;
                }else{
                    a+='0', b+='0';
                }

            }
        }

        cout << a <<'\n'<< b << endl;
    }

}
