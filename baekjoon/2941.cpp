#include <iostream>
#include <string>

using namespace std;

string CROATIA_ALPHABETS[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

int charLength(string str, int index) {
  int max_idx = str.size() - 1;
  for(int i=0, size=8; i<size; i++) {
    string croatia = CROATIA_ALPHABETS[i];

    for(int j=0, j_size=croatia.size(); j<j_size; j++) {
      if(croatia[j] != str[index + j]) {
        break;
      }

      if(j == j_size -1) {
        return j_size;
      }
    }
  }
  return 1;
}

int main() {
  string str;
  cin >> str;

  int count = 0;
  for(int i=0, size=str.size(); i<size;) {
    i += charLength(str, i);
    count++;
  }
  cout << count << endl;
  return 0;
}
