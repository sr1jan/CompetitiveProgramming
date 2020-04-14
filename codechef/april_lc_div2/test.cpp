/* 
 * Author: sr1jan
 * I shall taste the blood...
 *
*/
#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define mp make_pair
#define pb push_back

typedef long long ll;
// global 

// timer code
/* auto start = chrono::high_resolution_clock::now(); */ 
/* auto end = chrono::high_resolution_clock::now(); */ 
/* double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count(); */ 
/* time_taken *= 1e-9; */ 
/* cout << time_taken << setprecision(9) << endl; */ 

ll gcd(ll a, ll b) {if(a==0) return b; return gcd(b%a, a);}

bool p_se_sort(pair<int,int> a, pair<int,int> b){
    return a.second<b.second;
}

const int mxn = 1e6;

void fastscan(int &number) 
{ 
	//variable to indicate sign of input number 
	bool negative = false; 
	register int c; 

	number = 0; 

	// extract current character from buffer 
	c = getchar(); 
	if (c=='-') 
	{ 
		// number is negative 
		negative = true; 

		// extract the next character from the buffer 
		c = getchar(); 
	} 

	// Keep on extracting characters if they are integers 
	// i.e ASCII Value lies from '0'(48) to '9' (57) 
	for (; (c>47 && c<58); c=getchar()) 
		number = number *10 + c - 48; 

	// if scanned input has a negative sign, negate the 
	// value of the input number 
	if (negative) 
		number *= -1; 
} 

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    auto start = chrono::high_resolution_clock::now(); 
    int n;
    fastscan(n);
    int a[n];
    for(int i=0; i<n; i++) fastscan(a[i]);
    for(int i=0; i<n; i++) cout << a[i] << endl;
    /* unordered_map<int ,unordered_set<int>> vt(mxn); */
    /* for(int i=1; i<mxn; i++){ */
    /*     for(int j=i; j<mxn; j+=i){ */
    /*         vt[i].emplace(j); */
    /*     } */
    /* } */
    auto end = chrono::high_resolution_clock::now(); 
    double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count(); 
    time_taken *= 1e-9; 
    cout << time_taken << setprecision(9) << endl; 

}
