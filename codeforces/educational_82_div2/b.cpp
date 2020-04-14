/* #include <bits/stdc++.h> */
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long long int t, n, g, b, tmp;
    cin >> t;

    while(t--){
        tmp = 0L;
        cin >> n >> g >> b;

        if (g>=n){
            cout << n << endl;
            continue;
        }

        long long int ng = (n+1)/2;
        tmp = ng / g * (g+b);
        if(ng%g==0L){
            tmp = tmp - b;
        }else{
            tmp = tmp + ng%g;
        }

        cout << max(n,tmp)<<endl;

    }

}
