#include <vector>
#include <algorithm>
#include <iostream>
#include <numeric>
/* #include <bits/stdc++.h> */

typedef long long ll;
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    string s,ss;
    vector<string> s_ar;

    int max=0;
    pair<int,string> i_s;
    for(int i=0; i<n; i++){
        cin >> ss;
        s_ar.push_back(ss);

        int kk=i;

        for (int k=0; k<=kk; k++){
            std::vector<int> d(k+1);
            std::iota(d.begin(),d.end(),0);
            do
            {
                for (int j = 0; j < k; j++)
                {
                    s += s_ar[d[j]];
                }
                /* cout << s << endl; */
                if(s == string(s.rbegin(), s.rend())){
                    int l = s.length();
                    if (l>max){
                        max = l;
                        i_s.first = l;
                        i_s.second = s;
                    }
                }
                s.clear();
                std::reverse(d.begin()+(k+1),d.end());
            } while (next_permutation(d.begin(),d.end()));
        }
    }
    

    if(i_s.first > 0){
        cout << i_s.first << '\n' << i_s.second << endl;
    }else{
        cout << 0 << '\n';
    }

}
