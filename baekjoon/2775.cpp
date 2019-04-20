#include <iostream>
#include <algorithm>

using namespace std;

int test(int k, int n) {
  int apt[k+1][n];

  for(int i=0; i<=k; i++) {
    for(int j=0; j<n; j++) {
      int under, left;
      under = i > 0 ? apt[i-1][j] : 1;
      left = j > 0 ? apt[i][j - 1] :  0;
      apt[i][j] = under + left;
    }
  }

  return apt[k][n-1];
}

int main() {
  int T;

  cin >> T;
  while(T--) {
    int k, n;
    cin >> k >> n;
    cout << test(k, n) << endl;
  }
}
