#include <iostream>

using namespace std;

int main() {
  int M, N;

  cin >> M >> N;

  int sum = 0, min = 0;

  for (int i = M; i <= N; i++) {
    int j;
    for (j = 2; j < i; j++) {
      if (i % j == 0) break;
    }

    if (j == i) {
      sum += i;
      if (min == 0) min = i;
    }
  }

  if (min == 0) {
    cout << -1;
  } else {
    cout << sum << endl;
    cout << min << endl;
  }
}
