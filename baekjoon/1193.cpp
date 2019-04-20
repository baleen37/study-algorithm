#include <iostream>

using namespace std;

int main() {
  int X, i=0, j=0, sum = 1;
  cin >> X;
  while(X>sum) {
    i++;
    if(i % 2 == 1) {
      sum += 1;
    } else {
      sum += i * 2;
    }
  }

  
  if(sum != X) {
    if(i % 2 == 1) {
      i--;
    }
    if(sum != X) {
      if(sum - i <= X) {
        j = sum - X;
        i -= j;
      } else {
        sum -= i * 2;
        j = X - sum;
        i -= (1 + j);
      }
    }
  }

  cout << j + 1 << "/" << i + 1 << endl;
  return 0;
}


