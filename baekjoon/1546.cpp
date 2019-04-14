#include <cstdio>
#include <cmath>
#include <vector>

int main() {
  int N, input, max = 0, sum = 0;
  scanf("%d", &N);
  for(int i=0; i<N; i++) {
    scanf("%d", &input);
    max = fmax(max, input);
    sum += input;
  }

  printf("%0.2lf", (double)100.0 * sum / max / N);
  return 0;
}
