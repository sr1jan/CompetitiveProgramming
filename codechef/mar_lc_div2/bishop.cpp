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

bool p_se_sort(pair<int,int> a, pair<int,int> b){
    return a.second<b.second;
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    vector<pair<int,int>> rc;
    for(int i=2; i<=8; i++){
        int j=i,k=i;
        rc.pb(mp(i,i));
        while(j<8&&k>1){
            j+=1;
            k-=1;
            rc.pb(mp(j,k));
        }
        while(j>1&&k<8){
            j-=1;
            k+=1;
            rc.pb(mp(j,k));
        }
        while(j<i&&k>i){
            j+=1;
            k-=1;
            rc.pb(mp(j,k));
        }
    }

    int t;
    cin>>t;
    while(t--){
        int r,c;
        int ans=0;
        cin>>r>>c;

        if(r==1&&c==1){
            cout << 55 << endl;
            for(auto o: rc) cout << o.fi << ' ' << o.se << '\n';
        }else if(r==c){
            vector<pair<int,int>> go_s;
            while(r>1&&c>1){
                ++ans;
                --r,--c;
                go_s.pb(mp(r,c));
            }
            cout << 55+ans << endl;
            for(auto o: go_s) cout << o.fi << ' ' << o.se << '\n';
            for(auto o: rc) cout << o.fi << ' ' << o.se << '\n';
        }else{
            vector<pair<int,int>> go_s;
            int d = (r+c) / 2;
            if(r>c){
                while(r>d&&c<d){
                    ++ans;
                    --r, ++c;
                    go_s.pb(mp(r,c));
                }
            }else{
                while(r<d&&c>d){
                    ++ans;
                    ++r, --c;
                    go_s.pb(mp(r,c));
                }
            }
            while(r>1&&c>1){
                ++ans;
                --r,--c;
                go_s.pb(mp(r,c));
            }
            cout << 55+ans << endl;
            for(auto o: go_s) cout << o.fi << ' ' << o.se << '\n';
            for(auto o: rc) cout << o.fi << ' ' << o.se << '\n';
        }
    }

}
