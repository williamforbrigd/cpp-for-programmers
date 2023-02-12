#include "set.hpp"
#include <algorithm>
#include <ostream>
#include <vector>

struct compare {
  int key;
  compare(const int &i) : key(i) {}
  bool operator()(const int &i) { // overloading the function call
    return (i == key);
  }
};

Set::Set() {}

Set::Set(std::vector<int> nums_) : nums(nums_) {}

// overloaded union operator, could use << as well
Set &Set::operator+=(const Set &other) {
  Set res = *this;
  for (auto &num : other.nums) {
    res += num;
  }
  *this = res;
  return *this;
}

/*
Set &Set::operator+=(const Set &other) {
  for (auto &num : other.nums) {
    *this += num;
  }
  return *this;
}
*/

Set &Set::operator+=(int num) {
  // find_if returns the last iterator if the compare(num) is not true
  if (std::find_if(nums.begin(), nums.end(), compare(num)) == nums.end())
    nums.emplace_back(num);
  return *this;
}

Set &Set::operator=(const Set &other) {
  nums = other.nums;
  return *this;
}

std::ostream &operator<<(std::ostream &out, const Set &set) {
  out << "{";
  for (auto num : set.nums) {
    out << " " << num;
  }
  out << " }";
  return out;
}
