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

const int mx = 1e9;

void showstack(stack <string> s) 
{ 
    while (!s.empty()) 
    { 
        cout << '\t' << s.top(); 
        s.pop(); 
    } 
    cout << '\n'; 
} 

void solve(){
    string s;
    int w=1, h=1;
    stack <char> st;
    st.push('(');
    cin>>s;
    s+=")";
    vector<char> ans;
    for(char c: s){
        if(c!=')') st.push(c);
        else{
            vector<char> sub;
            while(st.top() != '('){
                char ss = st.top();
                sub.emplace_back(ss);
                st.pop();
            }
            reverse(all(sub));
            st.pop();
            if(st.size()<=0){
                ans = sub;
                break;
            }
            if(isdigit(st.top())){
                int m = (int)(st.top() - 48);
                st.pop();
                while(m--){
                    for(int i=0; i<sz(sub); i++){
                        st.push(sub[i]);
                    }
                };
            }
        }
    }

    for(char c: ans){
        /* cout << c << ' '; */
        if(c=='N'&&h>1) h-=1;
        else if(c=='N'&&h==1) h = mx;

        else if(c=='S'&&h<mx) h+=1;
        else if(c=='S'&&h==mx) h = 1;

        else if(c=='E'&&w<mx) w+=1;
        else if(c=='E'&&w==mx) w = 1;

        else if(c=='W'&&w>1) w-=1;
        else if(c=='W'&&w==1) w = mx;

        /* cout << w << ' ' << h << endl; */
    }
    /* cout << endl; */
    cout << w << ' ' << h << endl;
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int t;
    cin>>t;
    int ti=0;
    while(t--){
        ++ti;
        cout << "Case #" << ti << ": ";
        solve();
    }

}
