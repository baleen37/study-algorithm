#include <iostream>

using namespace std;

int main()
{
  int N;
  int cnt = 0;
  int num;

  cin >> N;
  for (int i = 0; i < N; i++)
  {
    cin >> num;
    int j;
    for (j = 2; j < num; j++)
    {
      if (num % j == 0)
        break;
    }
    if (j == num)
      cnt++;
  }
  cout << cnt;

  return 0;
}
