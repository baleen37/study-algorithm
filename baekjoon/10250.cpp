#include <iostream>
#include <algorithm> 
#include <cmath> 

using namespace std;

int test(int h, int w, int n) {
  int x = ceil((float)n / h);
  int y = n % h;
  if(y == 0) y = h;

  return y * 100 + x;
}


int main() {
  int T;
  cin >> T;
  while(T--) {
    int h, w, n;
    cin >> h >> w >> n;
    cout << test(h, w, n) << endl;
  }
  return 0;
}
