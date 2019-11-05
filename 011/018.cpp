#include <bits/stdc++.h>
using namespace std;

int main() {

  const char* fname = "./data/018.txt";
  ifstream fin(fname);
  if ( !fin.is_open() ) {
    cerr << "Failed to open input file: " << fname << endl;
    exit(1);
  }

  vector<vector<int> > lines;

  for ( string line; getline(fin,line); ){
    stringstream ss(line);
    string number;
    vector<int> inner;

    while ( getline(ss, number, ' ') ) {
      inner.push_back(stoi(number));
    }
    lines.push_back(inner);
  }

  for( int i = lines.size()-1; i > 0; i-- ){
    for( int j = 0 ; j < lines[i].size(); j++ ){
      if( lines[i][j] > lines[i][j+1] ) {
        lines[i-1][j] += lines[i][j];
      } else {
        lines[i-1][j] += lines[i][j+1];
      }
    }
  }

  cout << lines[0][0] << endl;

  return 0;
}
