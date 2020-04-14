#include<iostream>
#include<chrono>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<cstring>

int readInt () {
	bool minus = false;
	int result = 0;
	char ch;
	ch = getchar();
	while (true) {
		if (ch == '-') break;
		if (ch >= '0' && ch <= '9') break;
		ch = getchar();
	}
	if (ch == '-') minus = true; else result = ch-'0';
	while (true) {
		ch = getchar();
		if (ch < '0' || ch > '9') break;
		result = result*10 + (ch - '0');
	}
	if (minus)
		return -result;
	else
		return result;
}

using namespace std;


int main(){
    auto start = chrono::high_resolution_clock::now(); 
    int n;
    cin>>n;
    int p[n];
    for(int i=0; i<n; i++) cin>>p[i];

    auto end = chrono::high_resolution_clock::now(); 
    double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count(); 
    time_taken *= 1e-9; 
    cout << time_taken << setprecision(9) << endl; 

    /* int v[] = {1, 2, 3, 4, 5}; */
    /* /1* vector<int> v{1,2,3,4}; *1/ */
    /* multiset<int> m(v.begin()+1, v.begin()+4); */
    /* vector<int> m(v+1, v+4); */
    /* for(auto i: m) cout <<i<<' '; */
    /* cout << endl; */
    /* auto eq = equal_range(m.begin(), m.end(), 2); */
    /* cout << eq.first-m.begin() << endl; */

}
