#include <bits/stdc++.h>
using namespace std;

int main() {

  int max_palindrome = -1;
  for ( int i = 100; i < 1000; i++ ) {
    for ( int j = 100; j < 1000; j++ ) {
      string num = to_string(i*j);
      string rev = num;
      reverse(rev.begin(), rev.end());
      if ( num == rev && i*j > max_palindrome ) { max_palindrome = i*j; }
    }
  }
  cout << max_palindrome << endl;

  return 0;
}
