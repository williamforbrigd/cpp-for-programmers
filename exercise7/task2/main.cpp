#include "set.hpp"
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
  Set s1({1, 4, 3});
  cout << "s1: " << s1 << endl;
  Set s2({4, 7});
  cout << "s2: " << s2 << endl;
  s1 += s2;
  cout << "Union of s1 and s2: " << s1 << endl;

  Set s3({5, 6, 7});
  cout << "s3: " << s3 << endl;
  Set s4({6, 7});
  cout << "s4: " << s4 << endl;
  s3 = s4;
  cout << "s3 = s4 :" << s3 << endl;
  return 0;
}
