#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

void merge(vector<int>& a, int low, int mid, int high) {
  int i, j, k, temp[high - low + 1];
  i = low;
  k = 0;
  j = mid + 1;

  while(i<= mid && j <= high) {
    if(a[i] < a[j]) {
      temp[k] = a[i];
      k++;
      i++;
    } else {
      temp[k] = a[j];
      k++;
      j++;
    }
  }

  while(i <= mid) {
    temp[k] = a[i];
    k++;
    i++;
  }
  while(j <= high) {
    temp[k] = a[j];
    k++;
    j++;
  }

  for(i = low; i <= high; i++) {
    a[i] = temp[i - low];
  }
}

void mergeSort(vector<int>& arr, int low, int high) {
  if(low < high) {
    int mid = (low + high) /  2;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
  }

  return ;
}

int main() {
  int N, input;
  vector<int> arr;
  scanf("%d", &N);
  for(int i=0; i<N; i++){
    scanf("%d", &input);
    arr.push_back(input);
  }

  mergeSort(arr, 0, arr.size() - 1);

  for(int i=0; i<N; i++){
    printf("%d\n", arr[i]);
  }
}
