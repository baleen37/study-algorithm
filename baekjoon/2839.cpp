#include <iostream>
using namespace std;

int main() {
  int n, five;
  cin >> n;

  if(n % 5 == 0) {
    cout << n / 5 << endl;
    return 0;
  }

  five = n / 5;
  for(int i = five; i >= 0; i--) {
    int remain = n - i * 5;
    if(remain % 3 == 0) {
      cout << i + remain / 3 << endl;
      return 0;
    }
  }

  cout << -1 << endl;

  return 0;
}
