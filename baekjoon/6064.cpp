#include <iostream>

using namespace std;

int test() {
  int m, n, x, y;
  cin >> m >> n >> x >> y;
  int year = -1;
  for(int i=0;year <= 40000;i++) {
    year = i * m + x;
    int rest = year % n  > ? year % n : n;
    if (rest == y) {
      return year;
    }
  }
  return -1;
}

int main() {
  int T;
  cin >> T;

  while(T--) {
    cout << test() << endl;
  }
  return 0;
}
