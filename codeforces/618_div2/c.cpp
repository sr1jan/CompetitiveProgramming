/* #include <bits/stdc++.h> */
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main(){
    long long int n, ans=0;
    cin >> n;
    long long int a[n];

    for (int i=0; i<n; i++){
        cin >> a[i];
    }

    if (n == 1) cout << a[0] << endl;

    sort(a, a+n, greater<long long>());

    ans = (a[0]|a[n-1]) - a[n-1];
    for (int i=1; i<((n/2)-1); i++){
        ans = (a[i]|a[n-(i+1)]) - a[n-(i+1)];
    }

    cout << ans << endl;


}
