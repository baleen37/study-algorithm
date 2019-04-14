#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
  int N;
  stringstream ss;
  cin >> N;
  for(int i=N; i>0; i--) {
    ss << i << '\n';
  }
  cout << ss.str();
  return 0;
}
