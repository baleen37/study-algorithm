#include <iostream>
using namespace std;

bool metric[6562][6562] = {};
int mark(bool on, int number, int x, int y) {
  if(number <= 1){
    metric[x][y] = on;
    return 0;
  }
  int distance = number / 3;
  for(int i=0; i< 3; i++){
    for(int j=0; j<3; j++) {
      mark(on && !(i == 1 && j == 1), distance, x + i * distance, y + j * distance);
    }
  }
  return 0;
}

int main() {
  int N;

  cin >> N;
  
  mark(true, N, 0, 0);

  for(int i=0; i<N; i++) {
    for(int j=0; j<N; j++) {
      cout << (metric[i][j] ? '*' : ' ');
    }
    cout << endl;
  }
}
