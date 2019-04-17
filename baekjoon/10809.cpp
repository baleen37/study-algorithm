#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
  int arr[26] = {};
  string str;
  cin >> str;

  for(int i=0, size=str.size(); i<size; i++) {
    if(arr[(int)str[i] - 97] <= 0) 
      arr[(int)str[i] - 97] = i + 1;
  }

  for(int i=0; i<26; i++) {
    printf("%d ", arr[i] - 1);
  }

  return 0;
}
