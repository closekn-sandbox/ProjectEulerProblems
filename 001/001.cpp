#include <bits/stdc++.h>
using namespace std;

int main() {

  int sum = 0;
  for ( int i = 1; i < 1000; i++ ) {
    sum += ( i%3==0 || i%5==0 ) ? i : 0;
  }
  cout << sum << endl;

  return 0;
}