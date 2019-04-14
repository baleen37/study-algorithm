#include <cstdio>
using namespace std;

int main() {
  int N, trans, newTrans, cnt = 0;
  scanf("%d", &N);

  trans = N;
  do {
    trans = trans % 10 * 10 + (trans / 10 + trans % 10) % 10;
    cnt++;
  } while(N != trans);

  printf("%d", cnt);
  return 0;
}
