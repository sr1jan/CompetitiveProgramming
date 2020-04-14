#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int d[20];
    memset(d, 0, sizeof(d));
    ++d[19];
    for(int i=0; i<20; i++) cout <<d[i]<<endl;
}
