#include <bits/stdc++.h>
using namespace std;

template <typename T> T too_big(const char* num) {
  stringstream ss(num);
  T ret;
  return ss >> ret ? ret : 0;
}

int main() {

  static const char* file_name = "./data/013.txt";
  ifstream fin(file_name);
  if( !fin.is_open() ) {
    cout << "Failed to open file: " << file_name << endl;
    exit(1);
  }

  long long sum = 0;
  for( string line ; getline(fin,line); ) {
    sum += too_big<long long>(line.substr(0,11).c_str());
  }

  cout << to_string(sum).substr(0,10) << endl;

  return 0;
}
