#include <cstdio>
using namespace std;

int sumEachCiphers(int num) {
  if(num == 0) return 0;
  return num % 10 + sumEachCiphers(num / 10);
}

int main() {
  int arr [10001] = { }; 
  int gen = 0;
  for(int i=0;i<10000;i++) {
    gen = i + sumEachCiphers(i);
    if(gen <= 10000)
      arr[gen]++;
  }

  for(int i=0; i<10000; i++){
    if(arr[i] == 0) {
      printf("%d\n", i);
    }
  }
  return 0;
}
