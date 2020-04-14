/* #include <bits/stdc++.h> */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long int t=0, n=0;
    cin >> t;

    while(t--){
        n = 0;
        cin >> n;
        n = 2*n;

        long long int a[n];

        for (int i=0; i<n; i++) cin >> a[i];

        if (n == 2){
            cout << abs(a[0] - a[1]) << '\n';
            continue;
        }
        sort(a, a+n);
        cout << abs(a[(n/2)-1] - a[n/2]) << endl;
    }

}
