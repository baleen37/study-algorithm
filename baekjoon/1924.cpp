#include <iostream>
#include <string>
using namespace std;
int main() {
  int days_of_month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
  string day_of_weeks[] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

  int acc_day = 0;
  int x, y;
  cin >> x >> y;

  acc_day += y;
  for (int i = 0; i<x-1; i++) {
    acc_day += days_of_month[i];
  }
  cout << day_of_weeks[acc_day % 7] << endl;

  return 0;
}
