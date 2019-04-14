#include <cstdio>
using namespace std;

int main() {
  int N;
  scanf("%d", &N);
  if(N < 100) {
    printf("%d", N);
    return 0;
  }

  int a,b,c;
  int cnt = 99;
  for(int i=100; i <= N; i++) {
    a = i / 100 % 10;
    b = i / 10 % 10;
    c = i % 10;
    if(i < 1000 && a - 2 * b + c == 0) {
      cnt++;
    }
  }
  printf("%d\n", cnt);
  return 0;
}
