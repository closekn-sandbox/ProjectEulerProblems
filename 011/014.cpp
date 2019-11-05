#include <bits/stdc++.h>
using namespace std;

const int n = 1000000;

int main() {

	int max_chain_size = 0;
	int max_chain_num = 0;

	int *arr = new int[n];
	memset(arr, 0, n);

	for ( int i = 1; i < n+1; i++ ) {
		long long b = i;
		int ct = 1;
		while ( !(b == 1) ) {
      b = ( b%2 == 0 ) ? b/2 : 3*b + 1;
			ct += 1;
			if ( (b-1 < n) && !(arr[b-1] == 0) ) {
				ct += arr[b-1];
				b = 1;
			}
		}
		arr[i-1] = ct;
		if ( ct > max_chain_size ) {
			max_chain_size = ct;
			max_chain_num = i;
		}
	}

	cout << max_chain_num << endl;

  return 0;
}
