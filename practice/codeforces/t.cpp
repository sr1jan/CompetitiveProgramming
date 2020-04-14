#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int> arr{1, 2, 3, 4, 5};

    for(auto i: arr) cout << i << ' ';
    cout << endl;

    arr.erase(arr.begin()+2, arr.begin()+3);

    for(auto i: arr) cout << i << ' ';
    cout << endl;
}

