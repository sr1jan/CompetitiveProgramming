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

    int t;
    cin>>t;
    while(t--){
        string w, c;
        getline(cin >> ws, w);
        getline(cin >> ws, c);
        int diff = 0;

        if(c.size()==w.size()){
            for(int i=0; i<c.size()&&i<w.size(); i++){
                if((int)w[i]!=(int)c[i]) ++diff;
            }
            diff += fabs(c.size()-w.size());

            if(diff==0) cout << "You're logged in!" << endl;
            if(diff==1) cout << "You almost got it. You're wrong in just one spot." << endl;
            if(diff==2) cout << "You almost got it, but you're wrong in two spots." << endl;
            if(diff==3) cout << "You're wrong in three spots." << endl;
            if(diff>3) cout << "What you entered is too different from the real password." << endl;
        }else{

        }


   }

}
