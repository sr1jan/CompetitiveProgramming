#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int arr[] = {2, 413 , 1, 13, 4};
    sort(arr, arr+5);
    // arr = {1,2,4,13,413}

    /* auto x = lower_bound(arr, arr+5, 1); */
    /* auto y = upper_bound(arr, arr+5, 1); */
    /* auto r = equal_range(arr, arr+5, 413); */

    /* cout << *x << '\t'<< *y<<'\t'<<endl; */
    /* cout << *r.first<<'\t'<<*r.second<<endl; */
    /* cout << y-x<<endl; */

    /* int a=0, b=4, x=13; */
    /* while(a<=b){ */
    /*     int m = (a+b)/2; */

    /*     if(arr[m]==x){ */
    /*         cout << m << endl; */
    /*         break; */
    /*     } */ 

    /*     if(arr[m]>x) b=m-1; */
    /*     else a=m+1; */
    /* } */
}
