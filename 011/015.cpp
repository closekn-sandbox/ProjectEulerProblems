#include <bits/stdc++.h>
using namespace std;

const int N = 21;

int main() {

  long long grid[N][N];
  for ( int i = 0; i < N; i++ ) {
    grid[i][0] = 1;
    grid[0][i] = 1;
  }

  for ( int i = 1; i < N; i++ ) {
    for ( int j = 1; j < N; j++ ) {
      grid[i][j] = grid[i-1][j] + grid[i][j-1];
    }
  }

  cout << grid[N-1][N-1] << endl;
  
  return 0;
}
