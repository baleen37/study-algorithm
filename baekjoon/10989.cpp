#include <cstdio>

#define MAX_SIZE 10000

using namespace std;

int main() {
  int n, input;
  int count[MAX_SIZE + 1] = {};

  scanf("%d", &n);
  for(int i=0; i<n; i++) {
    scanf("%d", &input);
    count[input]++;
  }

  for(int i=0; i<=MAX_SIZE; i++) {
    for(int j=0; count[i] > 0 && j<count[i]; j++) {
      printf("%d\n", i);
    }
  }


  return 0;
}
