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
        int n, k;
        cin>>n>>k;
        vector<int> arr(n);
        vector<int> mis(n, 0);
        int c=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(abs(arr[i]-(i+1))!=0){
                ++c;
                mis[i] = 1;
            }
        }

        if(!c){
            cout << 0 << endl;
            continue;
        }else if(c%3!=0){
            cout << -1 << endl;
            continue;
        }

        cout << c/3 << endl;
        int itr=0;
        for(int i=0; i<n; i++){
            if(!mis[i]) continue;
            if(itr%3==0&&itr){
                itr=0;
                cout<<endl;
            }

            cout << i+1 << ' ';
            ++itr;
        }
        cout << endl;

    }

}
