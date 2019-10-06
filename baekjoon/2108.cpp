#include <cstudio>

#define MAX_SIZE 500000

int main() {
  int n, input;
  int arr[MAX_SIZE + 1] = {};
  int medianArr[MAX_SIZE + 1] = {};
  int sum = 0;

  scanf("%d", &n);
  for(int i=0; i<n; i++) {
    scanf("%d", &input);
    arr[i] = input;

    sum+=input;
    medianArr
  }

  printf("%d\n", sum);
  return 0;
}
