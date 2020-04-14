/* #include <bits/stdc++.h> */
#include <iostream>

using namespace std;

int main(){
    int t,n,s,p,min_s;
    cin >> t;
    
    while(t--){
        cin >> n;
        int a[n];

        min_s = 0; 
        s=0;
        p=1;

        for (int i=0; i<n; i++){
            int tmp;
            cin >> tmp;
            cout << tmp << endl;
            s += tmp;
            p *= tmp;

            if (tmp == 0) min_s++;
            cin >> a[i];
        }

        cout<<s<<' '<<p<< ' '<<min_s<<endl;

    }

}
