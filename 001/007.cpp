#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long num) {
  if (num < 2)      { return false; }
  if (num == 2)     { return true; }
  if (num % 2 == 0) { return false; }

  double sqrtNum = sqrt(num);
  for ( long long i = 3; i <= sqrtNum; i += 2 ) {
    if ( num % i == 0 ) { return false; }
  }

  return true;
}

int main() {

  int prime = 1;
  int ct = 0;
  while ( ct != 10001 ) {
    if ( isPrime(++prime) ) { ct++; }
  }
  cout << prime << endl;

  return 0;
}
