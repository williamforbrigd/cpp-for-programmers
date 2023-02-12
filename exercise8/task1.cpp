#include <iomanip>
#include <iostream>

using namespace std;

template <typename T>
std::string type_name();

template <typename Type>
bool equal(Type a, Type b) {
  cout << "Generic method to check if " << a << "==" << b << ": ";
  return a == b;
}

bool equal(double a, double b) {
  cout << setprecision(6) << "Specialized method to check if: " << a << "==" << b << ": ";
  return abs(a - b) < 0.00001;
}

int main() {
  int a = 100, b = 100;
  cout << equal(a, b) << endl;

  string s1 = "hei", s2 = "halla";
  cout << equal(s1, s2) << endl;

  string s3 = "hei", s4 = "hei";
  cout << equal(s3, s4) << endl;

  double a1 = 0.00009, b1 = 0.00008;
  cout << equal(a1, b1) << endl;

  double a2 = 0.00009, b2 = 0.00007;
  cout << equal(a2, b2) << endl;

  double a3 = 1.213123131313, b3 = 1.2131231313133;
  cout << equal(a3, b3) << endl;
}
