#include <iostream>

int pairMatrix[10][10] = {};
int matched[10] = {};
int n;

int match() {
   for(int i=0; i<n; i++) {
     for(int j=i; j<n; j++) {
     }
   }
}

int main() {
  int T;

  scanf("%d", &T);

  for(int i=0; i<T; i++){
    int m;
    scanf("%d %d", &n, &m);

    int pairA, pairB;
    for(int j=0; j<m; j++) {
      scanf("%d %d", &pairA, &pairB);
      pairMatrix[pairA][pairB] = 1;
    }

    printf("%d\n", match());
  }

  return 0;
}
