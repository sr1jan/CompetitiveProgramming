#include <iostream>
/* #include <vector> */
/* #include <algorithm> */

using namespace std;
int main(){
    long long int t, n, k, r=0, tmp=0;
    cin >> t;

    while(t--){
        cin >> n >> k;

        long long int arr[n];
        tmp = 0;
        r = 0;

        for (int i=0; i<n; i++){
            cin >> tmp;
            r += tmp%k;

            arr[i] = tmp%k;
        }

        for (int i=n-1; i>=0; i--){
            if ((r - ((k - arr[i]) + arr[i])) >= 0){
                r = (r - ((k - arr[i]) + arr[i])); 
                continue;
            }

            cout << r << endl;
            break;
        }
            
    }
}
