#include <cstdio>
#include <iostream>
using namespace std;
int main() {
  int input, sum = 0;
  for(int i=0; i<5; i++) {
    scanf("%d", &input);
    sum += max(input, 40);
  }
  printf("%d\n", sum / 5);
  return 0;
}
