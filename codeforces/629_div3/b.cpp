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

void swap(char*a, char*b){
    char tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int b1, b2;
        for(int i=n-2; ~i; i--){
            if(k<=n-1-i){
              b1=i;
              b2=n-k;
              break;
            }else{
                k-=n-1-i;
            }
        }

        for(int i=0; i<n; i++){
            if(i==b1||i==b2)
                cout << 'b';
            else
                cout << 'a';
        }
        cout << endl;
    }

}
