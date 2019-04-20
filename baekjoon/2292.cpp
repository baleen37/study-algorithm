#include <iostream>
#include <string>

using namespace std;

int main() {
  int N, num = 1, area = 1;
  cin >> N;

  while(true){
    if(N <= num) break;
    num += area * 6;
    area++;
  }

  cout << area;
  return 0;
}
