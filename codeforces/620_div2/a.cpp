/* #include <bits/stdc++.h> */
#include <iostream>

typedef long long ll;
using namespace std;

int main(){
    int t;

    cin>>t;

    while(t--){
        ll x,y,a,b;
        cin >>x>>y>>a>>b;

        /* int sec=0, ans=0; */
        /* while(1){ */
        /*     sec++; */
        /*     /1* x+=a; *1/ */
        /*     y-=b; */
        /*     if (x==y){ */
        /*         ans = 1; */
        /*         break; */
        /*     } */
        /* } */

        ll m;
        ll sub = (y-x);
        ll sm = a+b;
        if (sub%sm==0){
            m = sub/sm;
            cout << m<<endl;
        }else{
            cout << -1 << endl;
        }

    }

}
