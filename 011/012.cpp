#include <bits/stdc++.h>
using namespace std;

int get_divisor_num(long long n) {
  int ct = 1;
  for ( int i = 2; i <= n; i++ ) {
    int cmb;
    for ( cmb = 1; n%i == 0; n /= i, cmb++ ) {}
    ct *= cmb;
  }
  return ct;
}

int main() {

  long long triangular_number = 3;
  long long i = 3;
  while ( get_divisor_num(triangular_number) <= 500 ) { triangular_number += i++; }
  cout << triangular_number << endl;

  return 0;
}
