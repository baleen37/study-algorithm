#include <iostream>
#include <string>
using namespace std;

int parse(char ch) {
  if(ch <= 'C') {
    return 2;
  } else if(ch <= 'F') {
    return 3;
  } else if(ch <= 'I') {
    return 4;
  } else if(ch <= 'L') {
    return 5;
  } else if(ch <= 'O') {
    return 6;
  } else if(ch <= 'S') {
    return 7;
  } else if(ch <= 'V') {
    return 8;
  } else {
    return 9;
  }
}

int main() {
  int sum = 0;
  string str;
  cin >> str;

  for(int i=0, size=str.size(); i<size; i++) {
    sum += parse(str[i]) + 1;
  }

  cout << sum << '\n';
  return 0;
}
