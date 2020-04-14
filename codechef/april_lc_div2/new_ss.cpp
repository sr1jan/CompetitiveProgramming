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

inline bool is_ss(ll n){
    if((n%4)==2||(n%4)==-2) return false;
    return true;
}

ll ss(vector<int> a, vector<int> dp, int l, int r, int k){
    int n = r - l;
    ll c = 0;
    vector<int> mul;
    while(k<=n){
        /* cout << "K: " << k; */
        for(int i=l; i<=r-k; i++){
            if(dp[i+(k-1)]==0){
                mul.pb(i+(k-1));
                ++c;
                continue;
            }
            dp[i+(k-1)] = (dp[i+(k-1)] * (a[i]%4)) % 4;
            if(is_ss(dp[i+(k-1)])) ++c;
        }
        if(sz(mul)>0){
            for(int i=0; i<sz(mul); i++){
                int indx = mul[i];
                vector<int> seg;
                vector<int> segdp;
                if(i<1){
                    seg.assign(a.begin(), a.begin()+indx);
                    segdp.assign(dp.begin(), dp.begin()+indx);
                }else{
                    seg.assign(dp.begin()+(mul[i-1]+1), dp.begin()+indx);
                    segdp.assign(dp.begin()+(mul[i-1]+1), dp.begin()+indx);
                }

                ll count=0;
                if(i==(sz(mul)-1)){
                    count = ((indx) + ((n-1)-indx) - (2*k-2)) + (indx * ((n-1)-indx));
                }else{
                    count = (indx + ((mul[i+1]-1)-indx) - (2*k-2)) + (indx * ((mul[i+1]-1)-indx));
                }

                if(sz(seg)<2){
                    c+=count;
                }else{
                    count += ss(seg, segdp, 0, sz(seg), k+1);
                    c+=count; 
                }
                /* cout << "K: " << k << ", C: " << c << endl; */
            }
            if(mul[sz(mul)-1]!=n-1){
                int indx = mul[sz(mul)-1];
                int l = indx+1, r=n;
                vector<int> seg(a.begin()+(indx+1), a.end());
                vector<int> segdp(a.begin()+(indx+1), a.end());
                if((r-l)>1){
                    c+=ss(seg, segdp, l, r, k+1);
                }
            }

            break;

        }else{
            ++k;
        }

        /* cout << ", C: " << c << endl; */
    }

    return c;
}

void solve(){
    int n;
    cin>>n;
    vector<int> a(n), dp(n);
    vector<array<int,3>> mul;
    ll c=0;
    for(int i=0, ai; i<n; ++i){
        cin>>ai;
        if(is_ss(ai)) ++c;
        a[i]=ai;
        dp[i]=ai%4;
        if(dp[i]==0) mul.pb({0,i,n});
    }
    
    /* for(auto i: mul) cout << i << ' '; */ 
    /* cout << endl; */

    vector<pair<int, int>> lr;
    lr.pb(mp(0,n));
    int k = 1;
    do{
        if(sz(mul)>0){
            for(int i=0; i<sz(mul); i++){
                int indx = mul[i][1], n=mul[i][2];
                int l,r;
                /* vector<int> seg, segdp; */
                if(i<1){
                    l=mul[i][0], r=indx;
                    /* seg.assign(a.begin(), a.begin()+indx); */
                    /* segdp.assign(dp.begin(), dp.begin()+indx); */
                }else if(i>1&&mul[i-1][0]==mul[i][0]){
                    l=mul[i-1][0]+1, r=indx;
                    /* seg.assign(dp.begin()+(mul[i-1]+1), dp.begin()+indx); */
                    /* segdp.assign(dp.begin()+(mul[i-1]+1), dp.begin()+indx); */
                }else{
                    l=mul[i][0], r=indx;
                }
                ll count=0;
                if(i==(sz(mul)-1)){
                    count = ((indx) + ((n-1)-indx) - (2*k-2)) + (indx * ((n-1)-indx));
                }else if(mul[i+1][2]==n){
                    count = (indx + ((mul[i+1][1]-1)-indx) - (2*k-2)) + (indx * ((mul[i+1][1]-1)-indx));
                }
                if((r-l)<2){
                    c+=count;
                }else{
                    c+=count;
                    lr.pb(mp(l, r));
                }
            }
            if(mul[sz(mul)-1][1]!=mul[sz(mul)-1][2]){
                int indx = mul[sz(mul)-1][1];
                int l=indx+1, r=mul[sz(mul)-1][2];
                /* vector<int> seg(a.begin()+(indx+1), a.end()); */
                /* vector<int> segdp(a.begin()+(indx+1), a.end()); */
                if((r-l)>1){
                    lr.pb(mp(l,r));
                }
            }
            mul.clear();
        }else{
            ++k;
            /* if(sz(lr)<1) lr.pb(mp(0,n)); */ 
            for(auto seg: lr){
                for(int i=seg.fi; i<=seg.se-k; i++){
                    if(dp[i+(k-1)]==0){
                        mul.pb({seg.fi,i+(k-1),seg.se});
                        ++c;
                        continue;
                    }
                    dp[i+(k-1)] = (dp[i+(k-1)] * (a[i]%4)) % 4;
                    if(is_ss(dp[i+(k-1)])) ++c;
                }
            }
            lr.clear();
        }
    }while(k<=n);

    cout << c << '\n';
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    auto start = chrono::high_resolution_clock::now(); 
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    auto end = chrono::high_resolution_clock::now(); 
    double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count(); 
    time_taken *= 1e-9; 
    cout << time_taken << setprecision(9) << endl; 
}
