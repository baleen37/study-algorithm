#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int test() {
  int alpha[26] = {};
  string str;
  cin >> str;

  char pre;
  for(int i=0, size=str.size(); i<size; i++) {
    if(pre != str[i] && alpha[(int)str[i] - 97] > 0)
      return 0;
    alpha[(int)str[i] - 97]++;
    pre = str[i];
  }
  return 1;
}

int main() {
  int N, sum=0;
  cin >> N;

  while(N--) {
    sum += test();
  }
  cout << sum << '\n';
  return 0;
}
