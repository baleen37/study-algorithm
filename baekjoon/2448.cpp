#include <cstdio>
using namespace std;

bool arr[3072][6144] = {};

int mark(int x, int y, int N) {
  arr[y][x] = true;

  arr[y+1][x-1] = true; 
  arr[y+1][x+1] = true;

  arr[y+2][x-2] = true; 
  arr[y+2][x-1] = true; 
  arr[y+2][x] = true;
  arr[y+2][x+1] = true;
  arr[y+2][x+2] = true;

  int next = N / 2;
  if(next >= 3) {
    mark(x, y, next);
    mark(x - (next), y + (next), next);
    mark(x + (next), y + (next), next);
  }
  return 0;
}

int main() {
  int N;
  scanf("%d", &N);

  mark(N, 0, N);
  for(int i=0; i<N; i++) {
    for(int j=0; j<N*2; j++) {
      printf("%c", arr[i][j] ? '*' : ' ');
    }
    printf("\n");
  }
  return 0;
}
