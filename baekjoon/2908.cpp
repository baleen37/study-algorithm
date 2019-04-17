#include <iostream>
#include <algorithm>

using namespace std;

int reverse(int num){
  int rev = 0;
  for(int i=0; i<3; i++) {
    rev = (num % 10) + rev * 10;
    num = num / 10;
  }
  return rev;
}

int main() {
  int a,b;

  cin >> a >> b;

  cout << max(reverse(a), reverse(b));
  return 0;
}
