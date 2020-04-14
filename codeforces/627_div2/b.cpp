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
/* cout << time_taken << setprecision(9) << '\n'; */ 

ll gcd(ll a, ll b) {if(a==0) return b; return gcd(b%a, a);}

bool p_se_sort(pair<int,int> a, pair<int,int> b){
    return a.second<b.second;
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    auto start = chrono::high_resolution_clock::now(); 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];

        vector<int> arev(a.rbegin(), a.rend());
        if(a==arev){
            cout << "YES" << '\n';
            continue;
        }else if(n<=3){
            cout << "NO" << '\n';
            continue;
        }

        multiset<int> aa(all(a));
        bool ok = false;
        for(int i=0; i<n; i++){
            if(aa.count(a[i])>=3){
                ok = true;
                break;
            }
        }
        if(ok){
            cout << "YES" << '\n';
            continue;
        }

        int i=0, j=n-1;
        bool w = false;
        while(i<=n-3){
            bool s = false;
            while(j>=i+2){
                if(a[i]==a[j]){
                    s = true;
                    break;
                }else{
                    --j;
                }
            }
            if(s){
               w = true;
               break;
            }
            j = n-1;
            ++i;
        }
        if(w){
            cout << "YES" << '\n';
        }else{
            cout << "NO" << '\n';
        }

    }

    auto end = chrono::high_resolution_clock::now(); 
    double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count(); 
    time_taken *= 1e-9; 
    cout << time_taken << setprecision(9) << '\n'; 

}
