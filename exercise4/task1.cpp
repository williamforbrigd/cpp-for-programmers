#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  cout << "Task 1: " << endl;
  vector<double> nums = {1.2, 2.0, 3.1, 4.2, 7.7, 7.6};
  cout << "First num: " << nums.front() << endl;
  cout << "Last num: " << nums.back() << endl;
  nums.emplace(nums.begin() + 1, 0.6);
  cout << "First num: " << nums.front() << endl;

  double val = 3.1;
  auto found = find(nums.begin(), nums.end(), val);
  if (found == nums.end()) {
    cout << "Could not find the value: " << val << endl;
  } else {
    cout << "Found the value: " << val << endl;
  }
}
