#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

bool sortinrev(const pair<int,int> &a,  
               const pair<int,int> &b) 
{ 
       return (a.first > b.first); 
} 

int main(){
    int p[] = {25,50,75,100};
    int mov[] = {0,1,2,3};
    int show[] = {0,1,2,3};

    struct Perm{
        int mv, st, pr;
    };

    vector<Perm> A;
    vector<Perm> B;
    vector<Perm> C;
    vector<Perm> D;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            for(int k=0; k<4; k++){
                if (i==0) A.push_back({mov[i], show[j], p[k]});
                if (i==1) B.push_back({mov[i], show[j], p[k]});
                if (i==2) C.push_back({mov[i], show[j], p[k]});
                if (i==3) D.push_back({mov[i], show[j], p[k]});
            }
        }
    }

    map<int, int> s = { make_pair(12,0),make_pair(3,1),make_pair(6,2),make_pair(9,3) };
    map<char, int> m = { make_pair('A',0),make_pair('B',1),make_pair('C',2),make_pair('D',3) };

    int t,n,st,pen=0;
    long long int score=0;
    char mv;

    cin >> t;
    while(t--){
        n = 0;
        cin >> n;

        pen = 0;
        vector<vector<int>> m_t(4, vector<int> (4, 0));

        for (int i=0; i<n; i++){
            cin >> mv >> st;
            m_t[m[mv]][s[st]] += 1;
        }


        int max_s = 0;
        int e_pts[] = {0,0,0,0};
        int e_scr = 0;
        vector<int> ans;
        for(auto a: A){
            for(auto b: B){
                for(auto c: C){
                    for(auto d: D){
                        if (( (a.st)!=(b.st) && (a.st)!=(c.st) && (a.st)!=(d.st) &&
                               (b.st)!=(c.st) && (b.st)!=(d.st) && (c.st)!=(d.st) ) && 
                            (  (a.pr)!=(b.pr) && (a.pr)!=(c.pr) && (a.pr)!=(d.pr) &&
                               (b.pr)!=(c.pr) && (b.pr)!=(d.pr) && (c.pr)!=(d.pr)) ){


                            e_pts[0] = (m_t[a.mv][a.st] * a.pr);
                            e_pts[1] = (m_t[b.mv][b.st] * b.pr);
                            e_pts[2] = (m_t[c.mv][c.st] * c.pr);
                            e_pts[3] = (m_t[d.mv][d.st] * d.pr); 

                            pen = 0;
                            e_scr = 0;
                            for (int i=0; i<4; i++){
                                /* cout << e_pts[i] << '\t'; */
                                if (e_pts[i] == 0){
                                    pen += 1;
                                }else{
                                    e_scr += e_pts[i];
                                }
                            } 
                            
                            /* cout << '\n'; */
                            /* cout << e_scr << '\t' << pen << endl; */

                            if (max_s<e_scr) max_s=e_scr;
                            ans.push_back(e_scr - (100*pen));

                            /* if (pts!=0) cout << pts << '\n'; */
                            /* cout << a.mv << '\t' << a.st << '\t' << a.pr << '\n'; */
                            /* cout << b.mv << '\t' << b.st << '\t' << b.pr << '\n'; */
                            /* cout << c.mv << '\t' << c.st << '\t' << c.pr << '\n'; */
                            /* cout << d.mv << '\t' << d.st << '\t' << d.pr << '\n'; */
                            /* cout << '\n'; */
                        }
                    } 
                }
            }
        }

        /* cout << '\n'; */
        /* for(int i=0; i<4; i++){ */
        /*     for(int j=0; j<4; j++){ */
        /*         cout << m_t[i][j] << '\t'; */
        /*     } */
        /*     cout << '\n'; */
        /* } */

        int max_ele = *max_element(ans.begin(), ans.end());
        cout << max_ele << endl;
        score += max_ele;

    }

    cout << score << endl;
}
