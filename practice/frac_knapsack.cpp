#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<int,int> p1, pair<int,int> p2){
    return (p1.first/p1.second > p2.first/p2.second);
}

double fknapsack(vector<pair<int,int>> &vw, int n, int w){
    sort(vw.begin(), vw.end(), cmp);
    double ans=0;
    double wt=0;

    int i=0;
    while(i<n && wt+vw[i].second <= w){
        wt += vw[i].second;
        ans+= vw[i].first;
        ++i;
    }

    if(i<n){
        int diff = w - vw[i].second;
        ans += vw[i].first * ((double)diff/vw[i].second);
        ++i;
    }

    return ans;
}

int main(){
    vector<pair<int,int>> vw;
    int n, target;
    cin>>n>>target;
    int t = n;
    while(t--){
        int p, w;
        cin>>p>>w;
        vw.push_back(make_pair(p,w));
    }

    double ans = fknapsack(vw, n, target);

    cout << "MAX VAL: " << ans << endl;
}
