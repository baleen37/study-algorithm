#include <cstdio>
using namespace std;

int main() {
  int ax, ay;
  int bx, by;
  int cx, cy;
  int dx, dy;

  scanf("%d %d", &ax, &ay);
  scanf("%d %d", &bx, &by);
  scanf("%d %d", &cx, &cy);

  if(ax == bx) {
    dx = cx;
  } else if(ax == cx) {
    dx = bx;
  } else {
    dx = ax;
  }

  if(ay == by) {
    dy = cy;
  } else if(ay == cy) {
    dy = by;
  } else {
    dy = ay;
  }

  printf("%d %d", dx, dy);
  return 0;
}
