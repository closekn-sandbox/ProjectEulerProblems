#include <bits/stdc++.h>
using namespace std;

int main() {

  long long sum = 2;
  int b1 = 2;
  int b2 = 1;
  int now;
  while ( b1+b2 <= 4000000 ) {
    now = b1 + b2;
    sum += ( now%2 == 0 ) ? now : 0;
    b2 = b1;
    b1 = now;
  }
  cout << sum << endl;;

  return 0;
}
