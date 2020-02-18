#include <stdio.h>
#include <stdlib.h>

int MAX = 10000;
int isPrime[10001] = {};

int test() {
  int n;
  scanf("%d", &n);

  int pivot = n / 2;
  for (int i = pivot; i >= 2; i--) {
    if (!isPrime[i]) continue;
    for (int j = pivot; j < n; j++) {
      if (!isPrime[j]) continue;
      if (i + j != n) continue;
      printf("%d %d\n", i, j);
      return 0;
    }
  }
  return 0;
}

int main() {
  int T;
  for (int i = 0; i <= MAX; i++) {
    isPrime[i] = 1;
  }
  scanf("%d", &T);

  for (int i = 2; i <= MAX; i++) {
    for (int j = i * 2; j <= MAX; j += i) {
      if (!isPrime[j]) continue;
      isPrime[j] = 0;
    }
  }

  for (int i = 0; i < T; i++) {
    test();
  }
  return 0;
}