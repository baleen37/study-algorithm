#include <iostream>

int map[21][21];
int H,W;

int dx[4][2] = {
  {0, 1},
  {1, 1},
  {0, 1},
  {0, -1},
};
int dy[4][2] = {
  {1, 1},
  {0, 1},
  {1, 0},
  {1, 1},
};

using namespace std;

void clearMap() {
  for(int y=0; y<21; y++) {
    for(int x=0; x<21; x++) {
      map[y][x] = 1;
    }
  }
}

int showTable() {
  for(int y=0; y<H; y++) {
    for(int x=0; x<W; x++) {
      cout << map[y][x];
    }
    cout << endl;
  }
  return 0;
}

int isAvaliable(int y, int x, int d_type) {
  if(map[y][x] != 0){
    return false;
  }
  for(int i=0; i<2; i++) {
    int y1 = y + dy[d_type][i], x1 = x + dx[d_type][i];
    if(!(y1 >= 0 && y1 < H && x1 >= 0 && x1 < W && map[y1][x1] == 0)) {
      return false;
    }
  }
  return true;
}

int search(int depth) {
  int y = -1, x = -1;
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (map[i][j] == 0) {
        y = i;
        x = j;
        break;
      }
    }
    if(y != -1) break;
  }

  if(y == -1) {
    return 1;
  }

  int ret = 0;
  for(int i=0; i<4; i++) {
    int y1 = y, x1 = x;
    int y2 = y + dy[i][0], x2 = x + dx[i][0];
    int y3 = y + dy[i][1], x3 = x + dx[i][1];

    // match
    if(isAvaliable(y, x, i)) {
      map[y1][x1] = map[y2][x2] = map[y3][x3] = depth;
      ret += search(depth+1);
      map[y1][x1] = map[y2][x2] = map[y3][x3] = 0;
    }
  }

  return ret;
}

int main() {
  int C;
  cin >> C;
  char text[20];
  for(int i=0; i<C; i++) {
    cin >> H >> W;
    clearMap();

    for(int h=0; h<H; h++) {
      cin >> text;
      for(int w=0; w<W; w++) {
        map[h][w] = text[w] == '#' ? 1 : 0;
      }
    }

    cout << search(2) << endl;
  }
}
