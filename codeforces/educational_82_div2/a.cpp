/* #include <bits/stdc++.h> */
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t=0,l=0;
    cin >> t;
    string str;

    while(t--){
        str.erase();
        l = 0;
        /* getline(cin, str); */
        cin >> str;
        /* string::iterator it; */
        int n_z = 0;

        /* if (str.length() == 1) cout << 0 << endl; */

        vector<int> ii;
        l = str.length();
        for(int i=0; i<l; i++){
            if (str.at(i) == '1') ii.push_back(i);
        }

        l = ii.size();
        for(int i=0; i<l-1; i++){
            n_z += ii[i+1] - (ii[i]+1);
        }

        cout << n_z << endl;
    }

}
