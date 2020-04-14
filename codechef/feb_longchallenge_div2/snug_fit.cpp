#include <iostream>
/* #include <vector> */
#include <algorithm>

using namespace std;

int main(){
    int t, diff;
    long long int sum, n, tmp;
    /* vector<int> a, b; */

    cin >> t;
    while(t--){
        sum = 0;
        diff = 0;
        tmp = 0;
        cin >> n;
        long long int a[n], b[n];

        for (int i=0; i<n; i++){
            cin >> tmp;
            if (i>0){
                if(tmp != a[i-1]) diff++;
            }
            a[i] = tmp;
        }
        for (int i=0; i<n; i++){
            cin >> b[i];
            if (i>0){
                if(tmp != a[i-1]) diff++;
            }
        }

        if (diff > 0){
            sort(a, a+n);
            sort(b, b+n);
        }

        for (int i=0; i<n; i++){
            sum += min(a[i], b[i]);
        }

        cout << sum << endl;

    }

}
