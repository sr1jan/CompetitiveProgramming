#include <iostream>
#include <algorithm>
#include <vector>

typedef long long int ll;

using namespace std;

bool sortinrev(const pair<int,int>&a, const pair<int,int>&b){
    return (a.first > b.first);
}

int main(){
   int t, n, p, tmp, sum;
   cin >> t;

   while(t--){
       cin>>n>>p;
       sum=0;tmp=0;

       vector<int> d;
       int er_ans=1;
       for (int i=0; i<n; i++){
           cin >> tmp;
           if(tmp>p||((p%tmp)!=0)) er_ans=0;
           sum += tmp;
           d.push_back(tmp);
       }

       if(er_ans==1){
           cout << "NO" << endl;
           continue;
       }

       if(p>=sum){
           if(p%sum==0){
               cout << "NO" << endl;
               continue;
           }
           int res=0;
           for (auto di: d){
               if(((p%sum)>=di)&&(((p%sum)%di)==0)){
                   res=1;
                   break;
               }
           }
           if (res==1){
               cout << "NO" << endl;
               continue;
           }
       }

       vector<pair<int,int>> dn;
       for(int i=0;i<d.size();i++){
           dn.push_back(make_pair(d[i], i));
       }

       sort(dn.begin(), dn.end(), sortinrev);

       if(dn[0].first > p){
           cout << "YES" << ' ';
           for(int i=0; i<n; i++){
               if(i==dn[0].second){
                   cout << 1 << ' ';
               }else{
                   cout << 0 << ' ';
               }
           }
           cout << '\n';
           continue;
       }
       if(dn[0].first < p){
           cout << "YES" << ' ';
           for(int i=0; i<n; i++){
               if(i==dn[0].second){
                   cout << ((p/dn[0].first)+1) << ' ';
               }else{
                   cout << 0 << ' ';
               }
           }
           cout << '\n';
           continue;
       }


   }
}
