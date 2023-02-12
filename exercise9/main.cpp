#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

using namespace std;

ostream &operator<<(ostream &out, vector<int> &vec) {
  for (auto &el : vec) {
    out << el << " ";
  }
  return out;
}

int main() {
  vector<int> v1 = {3, 3, 12, 14, 17, 25, 30};
  cout << "v1: " << v1 << endl;

  vector<int> v2 = {2, 3, 12, 14, 24};
  cout << "v2: " << v2 << endl;

  cout << "Task a:" << endl;
  auto p = find_if(v1.begin(), v1.end(), [](int i) -> bool {
    return i > 15;
  });
  if (p == v1.end()) {
    cout << "Could not find an element greater than 15" << endl;
  } else {
    int idx = p - v1.begin();
    cout << "Element: " << v1.at(idx) << " at index: " << idx << " is greater than 15" << endl;
  }

  cout << "Task b:" << endl;
  function<bool(int, int)> is_equal = [](int a, int b) {
    // cout << a << " " << b << endl;
    return abs(a - b) <= 2;
  };

  bool val = equal(v1.begin(), v1.begin() + 5, v2.begin(), is_equal);
  if (val) {
    cout << "Interval [v1.begin(), v1.begin() + 5> and [v2.begin(), v2.begin() + 5)> are equal" << endl;
  } else {
    cout << "Interval [v1.begin(), v1.begin() + 5> and [v2.begin(), v2.begin() + 5> are not equal" << endl;
  }

  bool val2 = equal(v1.begin(), v1.begin() + 4, v2.begin(), is_equal);
  if (val2) {
    cout << "Interval [v1.begin(), v1.begin() + 4> and [v2.begin(), v2.begin() + 4> are equal" << endl;
  } else {
    cout << "Interval [v1.begin(), v1.begin() + 4> and [v2.begin(), v2.begin() + 4> are not equal" << endl;
  }

  cout << "Task c:" << endl;
  function<bool(int)> is_odd = [](int i) {
    return (i % 2) == 1;
  };

  vector<int> result;
  result.resize(v1.size());
  replace_copy_if(v1.begin(), v1.end(), result.begin(), is_odd, 100);
  cout << "Result after replacing all odd elements with 100 is: " << result << endl;
}

// TODO: trenger ikke disse men interessant å se hvordan koden ser ut i de forskjellige metodene

/*
template <class InputIterator, class UnaryPredicate>
InputIterator find_if(InputIterator first, InputIterator last, UnaryPredicate pred) {
  while (first != last) {
    if (pred(*first))
      return first;
    ++first;
  }
  return last;
}
*/

/*
template <class InputIterator1, class InputIterator2>
  bool equal ( InputIterator1 first1, InputIterator1 last1, InputIterator2 first2 )
{
  while (first1!=last1) {
    if (!(*first1 == *first2))   // or: if (!pred(*first1,*first2)), for version 2
      return false;
    ++first1; ++first2;
  }
  return true;
}
*/

/*
template <class InputIterator, class OutputIterator, class UnaryPredicate, class T>
  OutputIterator replace_copy_if (InputIterator first, InputIterator last,
                                  OutputIterator result, UnaryPredicate pred,
                                  const T& new_value)
{
  while (first!=last) {
    *result = (pred(*first))? new_value: *first;
    ++first; ++result;
  }
  return result;
}
*/
