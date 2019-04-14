#include <cstdio>
using namespace std;
void swap(int *a, int *b) {
   int t;
 
   t  = *b;
   *b = *a;
   *a = t;
}


int main() {
  int N[3], maxIdx;

  scanf("%d %d %d", &N[0], &N[1], &N[2]);

  for(int i=0; i<3; i++) {
    maxIdx = i;
    for(int j=i+1; j<3; j++){
      maxIdx = N[maxIdx] > N[j] ? maxIdx : j;
    }
    swap(&N[i], &N[maxIdx]);
  }
  printf("%d", N[1]);
  return 0;
}
