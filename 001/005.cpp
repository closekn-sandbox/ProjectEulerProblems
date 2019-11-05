#include <bits/stdc++.h>
using namespace std;

int main() {

  vector<int> factor;
  long long min_multiple = 1;
  
  for ( int i = 2; i <= 20 ; i++ ) {
    int tmp = i;
    for ( int j = 0; j < factor.size(); j++ ) {
      tmp /= ( tmp%factor[j] == 0 ) ? factor[j] : 1;
    }
    if ( tmp != 1 ) {
      min_multiple *= tmp;
      factor.push_back(tmp);
    }
  }
  
  cout << min_multiple << endl;

  return 0;
}
