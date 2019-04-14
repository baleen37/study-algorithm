#include <iostream>
#include <string>
using namespace std;
int main() {
  int N, sum = 0;
  string str;

  cin >> N;
  cin >> str;
  for(int i=0; i<N; i++) {
    sum += (int)str.at(i) - 48;
  }
  cout << sum << endl;
  return 0;
}
