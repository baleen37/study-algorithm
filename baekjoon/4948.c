#include <stdio.h>
#include <stdbool.h>

int MAX = 123456 * 2;

int main() {
  int N;
  bool isPrime[MAX+1];
  for (int i = 0; i <= MAX; i++) {
    isPrime[i] = true;
  }

  for (int i = 2; i <= MAX; i++){
    for (int j = i * 2; j <= MAX; j += i) {
      if(!isPrime[j]) continue;
      isPrime[j] = false;
    }
  }

  while (1) {
    scanf("%d", &N);
    if (N == 0) break;
    int count = 0;
    for(int i=N+1; i<=2*N; i++){
      if (isPrime[i]) count++;
    }
    printf("%d\n", count);
  }
  return 0;
}
