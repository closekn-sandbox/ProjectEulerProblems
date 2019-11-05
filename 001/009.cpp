#include <bits/stdc++.h>
using namespace std;

int main() {

  int abc = 1;
  for ( int a = 1; a < 1000; a++ ) {
    for ( int b = 1; b < 1000-a; b++ ) {
      int c = 1000 - a - b;
      if ( a*a + b*b == c*c ) { abc = a*b*c; break; }
    }
    if ( abc != 1 ) { break; }
  }
  cout << abc << endl;

  return 0;
}
