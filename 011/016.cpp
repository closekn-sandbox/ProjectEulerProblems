#include <bits/stdc++.h>
using namespace std;

int N = 1000;

int main() {

  vector<int> numbers;
  numbers.push_back(1);

  for (size_t i = 0; i < N; i++) {
    int carry = 0;

    for_each(numbers.begin(),numbers.end(),[&carry](int&  n){
      n *= 2;
      n += carry;
      carry = ( n >= 10 ) ? 1 : 0;
      n -= carry * 10;
    });

    if( 0 != carry ){
      numbers.push_back(carry);
    }
  }

  int sum = 0;
  for ( int i = 0; i < numbers.size(); i++ ) {
    sum += numbers[i];
  }
  cout << sum << endl;

  return 0;
}
