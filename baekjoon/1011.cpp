#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void test(){
  long long n, pow, x, y, min, max, warp=0;
  cin >>  x >> y;
  long long distance = y - x;
  for(n=1;;n++) {
    pow = n * n;
    min = pow - n + 1;
    max = pow + 1 + n - 1;
    if(min <= distance && distance <= max) {
      if(min <= distance && distance <= pow) warp = n * 2 - 1;
      else warp = n * 2;
      break;
    }
  }
  cout << warp << endl;
}

int main() {
  int T;

  cin >> T;
  while(T--) {
    test();
  }

  return 0;
}

