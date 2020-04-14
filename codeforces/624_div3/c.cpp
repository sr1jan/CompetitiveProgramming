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


int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    const string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    

    int t;
    cin>>t;
    while(t--){
        map<char,int> myMap;
        for(int i = 0; i < 26; i++ ){
          myMap[ tolower( alpha[i] ) ] = 0;
        }

        int n,m;
        cin>>n>>m;
        string s, ss;
        cin>>s;
        /* int p[m]; */
        /* multiset<int> pp; */
        for(int i=0; i<m; i++){
            int tmp=0;
            cin>>tmp;
            /* pp.insert(tmp); */
            /* p[i] = tmp; */
            ss = s.substr(0,tmp);
            for(int i=0; i<tmp; i++){
                myMap[s[i]] += 1;
            }
        }
        for(int i=0; i<n; i++) myMap[s[i]] += 1;

/*         for(auto i: pp){ */
/*             int c = pp.count(i); */
/*             for(int j=0; j<i; j++){ */
/*                 myMap[s[j]] += c; */
/*             } */
/*             pp.erase(i); */
/*         } */

        /* for(int i=0; i<ss.length(); i++) myMap[ss[i]] += 1; */

        for(auto al: myMap) cout << al.second << ' ';
        cout << '\n';
    }

}
