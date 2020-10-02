#include <iostream>

using namespace std;

int mov(int from, int to, int number) {
  if(number < 1) {
    return 0;
  }
  int other = 6 - (from + to);
  mov(from, other, number - 1);
  cout << from << " " << to << endl;
  mov(other, to, number - 1);

  return 0;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

  int K, cnt = 0;
  cin >> K;

  for(int i=1; i<K; i++){
    cnt += cnt + i;
  }
  cnt += K;
  cout << cnt << endl;
  mov(1, 3, K);
  return 0;
}
