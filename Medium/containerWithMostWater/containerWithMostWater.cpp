#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  int get_min(int num1, int num2) {
    if (num1 >= num2) {
      return num2;
    }
    return num1;
  }

  // O(n)
  int maxArea(vector<int> &height) {
    int area = INT16_MIN;
    int left_pointer = 0;
    int right_pointer = height.size() - 1;

    while (left_pointer < right_pointer) {
      int left_value = height[left_pointer];
      int right_value = height[right_pointer];

      int local_area =
          (right_pointer - left_pointer) * get_min(left_value, right_value);

      if (local_area > area) {
        area = local_area;
      }

      // Updating the 2 pointers.
      if (left_value > right_value) {
        right_pointer--;
      } else {
        left_pointer++;
      }
    }

    return area;
  }
};