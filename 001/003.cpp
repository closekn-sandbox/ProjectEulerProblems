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

  long long num = 600851475143;
  double sq_num = sqrt(num);
  int max_prime_factor = -1;
  for ( int i = 2; i < sq_num; i++ ) {
    if ( num%i == 0 && isPrime(i) ) { max_prime_factor = i; }
  }
  cout << max_prime_factor << endl;
  
  return 0;
}
