#include <bits/stdc++.h>
using namespace std;

int main() {

  long long sum_square = 0;
  long long square_sum = 0;

  for ( int i = 1; i <= 100; i++ ) {
    sum_square += i;
    square_sum += i*i;
  }
  sum_square *= sum_square;

  cout << sum_square - square_sum << endl;

  return 0;
}
