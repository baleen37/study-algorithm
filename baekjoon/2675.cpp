#include <iostream>
#include <string>
using namespace std;

void test() {
  int R;
  string str;
  cin >> R >> str;

  int size = str.size();
  for(int i=0; i<size; i++)
    for(int j=0; j<R; j++)
      cout << str[i];
  cout << '\n';
}

int main() {
  int T;

  cin >> T;

  while(T--) {
    test();
  }
  return 0;
}
