#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
  int mixArr[9] = {};
  string n;

  cin >> n;
  for(int i=0, size=n.size(); i<size; i++) {
    int num = (int)n[i] - 48;
    if(num == 9) num = 6;
    mixArr[num]++;
  }

  int maxNum=0;
  for(int i=0; i<9; i++) {
    int num = mixArr[i];
    if(i == 6) num = ceil((float)num / 2);

    maxNum = max(num, maxNum);
  }

  cout << maxNum << endl;
}
