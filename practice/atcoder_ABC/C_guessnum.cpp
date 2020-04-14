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

void solve(){
    int n, m;
    cin>>n>>m;
    vector<pair<int,int>> sc;
    for(int i=0; i<m; i++){
        int s, c;
        cin>>s>>c;
        sc.pb(mp(c,s-1));
    }

    int ans = -1;
    for(int num=1000; num>=0; num--){
        string nm = to_string(num);
        bool c = true;
        if(nm.size()!=n) c = false; 
        for(int i=0; i<m; i++){
            if(nm[sc[i].se] != (char)('0'+sc[i].fi)) c = false;
        }
        if (c) ans = num;
    }
    cout << ans << endl;
    return;

    /* int ans[n]; */
    /* bool state[n]; */
    /* memset(state, false, sizeof state); */
    /* memset(ans, 0, sizeof ans); */
    /* sort(all(sc)); */

    /* for(auto sci: sc){ */
    /*     cout << sci.fi << ' ' << sci.se << endl; */
    /* } */

    /* for(auto sci: sc){ */
    /*     if(sci.se==0&&sci.fi==0&&n>1) continue; */
    /*     if(state[sci.se]==false){ */
    /*         ans[sci.se] = sci.fi; */
    /*         state[sci.se] = true; */
    /*     } */
    /* } */

/*     if((ans[0]==0||state[0]==false)&&n>1){ */
/*         cout << -1 << endl; */
/*         return; */
/*     }else{ */
/*         for(auto d: ans){ */
/*             cout << d; */
/*         } */
/*         cout << '\n'; */
/*         return; */
/*     } */

}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    solve();

}
