#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
  if (num < 2)      { return false; }
  if (num == 2)     { return true; }
  if (num % 2 == 0) { return false; }

  double sqrtNum = sqrt(num);
  for ( int i = 3; i <= sqrtNum; i += 2 ) {
    if ( num % i == 0 ) { return false; }
  }

  return true;
}

int main() {

  long long sum = 0;
  for ( int i = 2; i < 2000000; i++ ) {
    sum += ( isPrime(i) ) ? i : 0;
  }
  cout << sum << endl;

  return 0;
}
