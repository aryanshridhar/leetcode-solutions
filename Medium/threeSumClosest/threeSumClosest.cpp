class Solution {
public:
  int closest = INT_MAX;
  int ans = INT_MAX;

  void getClosest(vector<int> &nums, int current, int index, int target) {
    int i = index + 1;
    int j = nums.size() - 1;
    int new_target = target - current;

    while (i < j) {
      int sum_generated = nums[i] + nums[j];

      if (sum_generated > new_target) {
        j--;
      } else if (sum_generated < new_target) {
        i++;
      } else if (sum_generated == new_target) {
        closest = target;
        ans = target;
        return;
      }

      if (abs(sum_generated - new_target) < closest) {
        closest = abs(sum_generated - new_target);
        ans = sum_generated + current;
      }
    }
  }

  int threeSumClosest(vector<int> &nums, int target) {
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++) {
      int current = nums[i];
      getClosest(nums, current, i, target);

      if (ans == target) {
        return target;
      }
    }

    return ans;
  }
};

//  [-1,2,1,-4]

// [-4,-1,1,2]
// -4 5