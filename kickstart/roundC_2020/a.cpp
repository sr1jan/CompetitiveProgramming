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

    int t, ti=0;
    cin>>t;
    while(t--){
        ++ti;
        int n, k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }

        ll sm = k*(k+1)/2;
        int ans=0;

        int i=0;
        int j=i+1;
        while(i<n){
            if(arr[i]==k){
                int c=1;
                while(arr[j]==arr[j-1]-1 && j<n){
                    ++j;
                    ++c;
                }

                if(c==k){
                    ++ans;
                    i=j;
                    j=i+1;
                    continue;
                }
                else if(arr[j]==k){
                    i=j;
                    j=i+1;
                    continue;
                }else{
                    i++;
                    j=i+1;
                    continue;
                }
            }
            ++i, ++j;
        }


        cout << "Case #" << ti << ": " << ans << endl;
    }
}
