#include <iostream>
#include <string>
using namespace std;
int main() {
  int size;
  string str;
  cin >> str;
  size = str.size();

  for(int i=0; i<size; i++) {
    if(i > 0 && i % 10 == 0) cout << endl;

    cout << str.at(i);
  }
  cout << endl;
  return 0;
}
