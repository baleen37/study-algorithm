#include <iostream>
using namespace std;

int main() {
  int a,b,c,multiple;
  int r[10] = {};
  cin >> a >> b >> c;
  multiple = a * b * c;

  do {
    r[multiple % 10]++;
    multiple = multiple/10;
  } while(multiple != 0);

  for(int i=0;i<10;i++)
    cout << r[i] << endl;
  return 0;
}
