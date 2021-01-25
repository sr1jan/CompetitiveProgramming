#include <iostream>

using namespace std;

int main(){
  long long a, b;
  cin >> a >> b;

  long long c = 1;
  for(long long i=2; i<=min(a, b); ++i){
    if((a%i==0) && (b%i==0)) ++c;
  }

  cout << c << endl;
}
