#include <cstdio>
#include <cstdlib>
int main() {
  int input, pre, direction = 0;
  for(int i=0; i<8; i++) {
    scanf("%d", &input);
    if(i > 0) {
      int diff = input - pre;
      if((diff != direction && direction != 0) || abs(diff) > 1) {
        direction = 0;
        break;
      }
      direction = diff;
    }
    pre = input;
  }

  if(direction < 0) {
    printf("descending\n");
  } else if(direction == 0) {
    printf("mixed\n");
  } else {
    printf("ascending\n");
  }
  return 0;
}
