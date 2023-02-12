#include <iostream>

using namespace std;

template <typename Type1, typename Type2>
class Pair {
public:
  Pair() {}

  Pair(Type1 first_, Type2 second_) : first(first_), second(second_) {}

  Pair operator+(Pair &p) {
    Pair res = *this;
    res.first = res.first + p.first;
    res.second = res.second + p.second;
    return res;
  }

  bool operator>(Pair &p) {
    return this->first + this->second > p.first + p.second;
  }

  friend ostream &operator<<(ostream &out, Pair &p) {
    out << p.first << ", " << p.second;
    return out;
  }

private:
  Type1 first;
  Type2 second;
};

int main(void) {

  Pair<double, int> p1(3.5, 14);
  Pair<double, int> p2(2.1, 7);
  cout << "p1: " << p1 << endl;
  cout << "p2: " << p2 << endl;

  if (p1 > p2)
    cout << "p1 er størst" << endl;
  else
    cout << "p2 er størst" << endl;

  auto sum = p1 + p2;
  cout << "Sum: " << sum << endl;

  return 0;
}
