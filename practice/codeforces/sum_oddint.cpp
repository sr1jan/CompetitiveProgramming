#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n, k;
        cin>>n>>k;
        if(n<k){
            cout << "NO" << endl;
            continue;
        }
        cout << (((n%2==0&&k%2==0&&(k*k)<=n)||(n%2!=0&&k%2!=0&&(k*k)<=n))?"YES":"NO") << endl;
    }
}
