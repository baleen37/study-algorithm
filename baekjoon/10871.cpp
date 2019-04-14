#include <cstdio>
#include <vector>
using namespace std;

int main() {
  int N, X, A;
  vector<int> arr;

  scanf("%d %d", &N, &X);

  for(int i=0; i<N; i++){
    scanf("%d", &A);
    if(A < X) {
      arr.push_back(A);
    }
  }

  for(int i=0,size=arr.size(); i<size; i++){
    printf("%d ", arr[i]);
  }
  return 0;
}
