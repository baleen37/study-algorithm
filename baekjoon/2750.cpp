#include <iostream>
#include <algorithm> 
#include <vector>

using namespace std;

int main() {
  int n, input;
  vector<int> arr;

  cin >> n;
  for(int i=0; i<n; i++) {
    cin >> input;
    arr.push_back(input);
  }

  int tmp;
  for(int i=0; i<n; i++) {
    tmp = i;
    for(int j=i; j<n; j++) {
      if(arr[tmp] > arr[j]) tmp = j;
    }
    cout << arr[tmp] << endl;;
    swap(arr[i], arr[tmp]);
  }
  return 0;
}
