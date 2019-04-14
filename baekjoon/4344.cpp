#include <cstdio>
#include <vector>
using namespace std;

void test() {
  int N, input, sum=0;
  vector<int> v;

  scanf("%d", &N);
  for(int i=0; i<N; i++) {
    scanf("%d", &input);
    v.push_back(input);
    sum += input;
  }
  float avg = (float) sum / N;
  int high_cnt = 0;
  for(int i=0; i<N; i++) {
    if(v[i] > avg) {
      high_cnt++;
    }
  }

  printf("%.3f%\n", (float) high_cnt / N * 100);
}

int main() {
  int T;
  scanf("%d", &T);
  for(int i=0; i<T; i++) {
    test();
  }
  return 0;
}
