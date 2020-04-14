#include<map>
#include<iostream>
using namespace std;
int main(){
    map<int, int> c;

    c[1] = 5;
    cout << (c[40]!=0?c[40]:false) << endl;
}
