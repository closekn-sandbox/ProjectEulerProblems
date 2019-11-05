#include <bits/stdc++.h>
using namespace std;

const int days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
const int sunday = 0;

int main() {
	
  int ct = 0, day = 2;
  for ( int y = 1901; y <= 2000; y++ ) {
    for ( int m = 1; m <= 12; m++ ) {
      if ( day == sunday ) { ct++; }
      day += ( m == 2 && y%4 == 0 && y%400 != 0 ) ? 29 : days[m];
      day %= 7;
    }
  }

  cout << ct << endl;

  return 0;
}
