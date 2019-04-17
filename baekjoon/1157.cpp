#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  int alphabets[26] = {};
  string str;
  cin >> str;

  int size = str.size();
  for(int i=0; i<size; i++) {
    if(str[i] <= 'Z') {
      alphabets[(int)str[i] - 65]++;
    } else {
      alphabets[(int)str[i] - 97]++;
    }
  }

  int topIdx=0;
  bool dup = false;
  for(int i=1; i<26; i++) {
    if(alphabets[i] == alphabets[topIdx] && alphabets[i] > 0) {
      dup = true;
    } else if(alphabets[i] > alphabets[topIdx]) {
      topIdx = i;
      dup = false;
    }
  }

  cout << (dup == true ? '?' :(char)(65 + topIdx));

  return 0;
}
