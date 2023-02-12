#pragma once
#include <ostream>
#include <vector>

class Set {
public:
  Set();
  Set(const Set &) = default; // need this function in order to: Set set = *this
  Set(std::vector<int> nums_);
  Set &operator+=(const Set &other); // this is the overloaded union operator. I guess you could use "<<" as well
  Set &operator+=(int num);
  Set &operator=(const Set &other);
  friend std::ostream &operator<<(std::ostream &out, const Set &set);

private:
  std::vector<int> nums;
};
