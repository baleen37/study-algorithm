#include <cstdio>

int main() {
  char c, pre = ' ';
  int count = 0;
  while(true) {
    scanf("%c", &c);
    if(c == '\n') {
      break;
    }
    if(pre == ' ' && c != ' '){
      count++;
    }
    pre = c;
  }
  printf("%d", count);
  return 0;
}
