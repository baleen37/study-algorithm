#include <cstdio>
using namespace std;

void test() {
  int score = 0 , acc = 0;
  char ch;
  while(true) {
    scanf("%c", &ch);
    if(ch == '\n') break;
    if(ch == 'O') {
      acc++;
      score += acc;
    } else {
      acc = 0;
    }
  }

  printf("%d\n", score);
}

int main() {
  int T;

 scanf("%d ", &T);

  for(int i=0; i<T; i++) {
    test();
  }

  return 0;
}
