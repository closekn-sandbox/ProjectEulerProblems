#include <bits/stdc++.h>
using namespace std;

#define MX 1000

const int s1to20[] = {0,3,3,5,4,4,3,5,5,4,3,6,6,8,8,7,7,9,8,8,6};
const int tens[] = {0,3,6,6,5,5,5,7,6,6};
const int hundred = 7;
const int thousand = 8;

int main() {

	int sum = 0;
	for ( int n = 1; n <= MX-1; n++ ) {
		if ( n >= 100 ) {
			sum += s1to20[n/100];
			sum += hundred;
			if (n % 100) { sum += 3; } else { continue; }
		}
		if ( n % 100 < 20 ) {
			sum += s1to20[n%100];
		} else {
			sum += tens[n/10%10];
			if ( n % 10 ) { sum += s1to20[n%10]; }
		}
	}
	sum += s1to20[1] + thousand;
	
  cout << sum << endl;

  return 0;
}