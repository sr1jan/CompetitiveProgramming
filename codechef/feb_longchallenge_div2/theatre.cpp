#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool sortinrev(const pair<int,int> &a,  
               const pair<int,int> &b) 
{ 
       return (a.first > b.first); 
} 

int main(){
    int p[] = {100, 75, 50, 25};
    map<int, int> s = { make_pair(12,0),make_pair(3,1),make_pair(6,2),make_pair(9,3) };
    map<char, int> m = { make_pair('A',0),make_pair('B',1),make_pair('C',2),make_pair('D',3) };

    int t,n,st,pen;
    long long int score=0;
    char mv;

    cin >> t;
    while(t--){
        cin >> n;

        pen = 0;
        long long int l_score = 0;
        vector<vector<int>> m_t(4, vector<int> (4, 0));
        vector< pair<int, int> > max_r;
        /* t_m.clear(); */
        /* max_r.clear(); */

        for (int i=0; i<n; i++){
            cin >> mv >> st;
            m_t[s[st]][m[mv]] += 1;
        }

        /* cout << '\n'; */
        /* for(int i=0; i<4; i++){ */
        /*     for(int j=0; j<4; j++){ */
        /*         cout << m_t[i][j] << '\t'; */
        /*     } */
        /*     cout << '\n'; */
        /* } */

        vector<int> t_j;
        vector<int> t_i;
        vector<int> ii{0,1,2,3};
        for (int i=0; i<4; i++){
            /* pair <int,int> max(0,0); */
            if (find(t_i.begin(), t_i.end(), i) != t_i.end()) continue;
            int max[] = {0,0,0};
            for(int j=0; j<4; j++){
                if (find(t_j.begin(), t_j.end(), j) != t_j.end()) continue;
                if ( ((m_t[i][j]) > max[0]) ){
                    max[0] = m_t[i][j];
                    /* max.second = i; */
                    max[1] = i;
                    max[2] = j;
                }
            }
            for(int k=0; k<4; k++){
                if (find(t_i.begin(), t_i.end(), k) != t_i.end()) continue;
                if ( ((m_t[k][max[2]]) > max[0]) ){
                    max[0] = m_t[k][max[2]];
                    /* max.second = i; */
                    max[1] = k;
                }
            }
            for(int l=0; l<4; l++){
                if (find(t_j.begin(), t_j.end(), l) != t_j.end()) continue;
                if ( ((m_t[max[1]][l]) > max[0]) ){
                    max[0] = m_t[1][l];
                    /* max.second = i; */
                    max[2] = l;
                }
            }

            if (max[0] != 0){
                max_r.push_back(make_pair(max[0], 0));
                t_i.push_back(max[1]);
                t_j.push_back(max[2]);
                ii.erase(remove(ii.begin(), ii.end(), max[1]), ii.end());
            }

        }

        for (auto i: ii){
            int max[] = {0,0,0};
            for (int j=0; j<4; j++){
                if (find(t_j.begin(), t_j.end(), j) != t_j.end()) continue;
                if( max[0] < m_t[i][j] ){
                    max[0] = m_t[i][j];
                    max[1] = i;
                    max[2] = j;
                }
            }

            if (max[0] != 0){
                t_i.push_back(max[1]);
                t_j.push_back(max[2]);
                max_r.push_back(make_pair(max[0], 0));
            }else{
                pen += 1;
            }
        }

        /* cout << '~' << endl; */
        /* for (auto i: max_r){ */
        /*     cout << i.first << '\t'; */
        /* } */
        /* cout << '\n'; */
        /* for (auto i: t_i){ */
        /*     cout << i << '\t'; */
        /* } */
        /* cout << '\n'; */
        /* for (auto j: t_j){ */
        /*     cout << j << '\t'; */
        /* } */

        sort(max_r.begin(), max_r.end(), sortinrev);

        int c = 0;
        for (auto i: max_r){
            l_score += p[c] * i.first;
            c += 1;
        }

        l_score -= (100*pen);
        cout << l_score << endl;
        score += l_score;

    }

    cout << score << endl;

}
