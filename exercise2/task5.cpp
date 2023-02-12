#include <iostream>

using namespace std;

int main() {
  double number = 2;
  double *pointer = &number;
  double &ref = number;

  number = 7;
  *pointer = 77;
  ref = 777;
}
