#include <iostream>

using namespace std;

int find_sum(const int *table, int length) {
  int sum = 0;
  const int *pointer = table;
  const int *end = &table[length];
  while (pointer < end) {
    sum += *pointer;
    pointer++;
  }
  return sum;
}

int main() {
  const int length1 = 10;
  const int length2 = 15;
  const int length3 = 20;
  const int table[length3] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
  int sum1 = find_sum(table, length1);
  cout << "sum of first 10: " << sum1 << endl;

  int sum2 = find_sum(table, length2);
  cout << "sum of next 5: " << (sum2 - sum1) << endl;

  int sum3 = find_sum(table, length3);
  cout << "sum of last 5: " << (sum3 - sum2) << endl;

  return 0;
}
