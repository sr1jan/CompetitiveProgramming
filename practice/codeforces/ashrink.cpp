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
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    while(true){
        bool ok = false;
        int i=0, c=1, l=0;
        while(i<arr.size()-1){
            if(arr[i]==arr[i+1]){
                ++c, ++i;
                ok = true;
            }else{
                if(c&1){
                    if((i+1)==arr.size()-1){
                        ++i;
                    }else{
                        c=1, l=i+1;
                        ++i;
                    }
                }else{
                    arr[i] = arr[i]+c/2;
                    arr.erase(arr.begin()+l, arr.begin()+i);
                    l = i+1;
                    c = 1;
                    ++i;
                    ok = true;
                    break;
                }
            }

            if(c>1 && arr[i]==arr[i-1] && i==arr.size()-1){
                arr[l] = arr[l] + c/2;
                arr.erase(arr.begin()+l+1, arr.end());
            }else if(c>1 && arr[i]!=arr[i-1] && i==arr.size()-1){
                arr[i-1] = arr[i-1] + c/2;
                arr.erase(arr.begin()+l, arr.begin()+i);
            }
        }
        for(auto i: arr) cout << i << ' ';
        cout << endl;
        if(ok) continue;
        break;
    }

    cout << arr.size() << '\n';

}
