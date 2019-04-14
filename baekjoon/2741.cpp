#include <iostream>
#include <string>
using namespace std;

int main() {
  int N;
  string str;
  cin >> N;
  for(int i=1; i<=N; i++) {
    str.append(to_string(i) + '\n');
  }
  cout << str;
  return 0;
}
