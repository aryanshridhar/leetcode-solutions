class Solution {
public:
  void getTwoSums(vector<int> &nums, int index, int current,
                  vector<vector<int>> &output) {
    int i = index + 1;
    int j = nums.size() - 1;
    int target = -1 * current;

    while (i < j) {
      int sum_generated = nums[i] + nums[j];
      if (sum_generated > target) {
        j--;
        continue;
      }

      if (sum_generated < target) {
        i++;
        continue;
      }

      if (sum_generated == target) {
        vector<int> o;
        o.push_back(current);
        o.push_back(nums[i]);
        o.push_back(nums[j]);

        output.push_back(o);

        while (i + 1 < nums.size() && nums[i] == nums[i + 1]) {
          i++;
        }

        while (j - 1 >= 0 && nums[j] == nums[j - 1]) {
          j--;
        }

        i++;
        j--;
      }
    }
  }

  vector<vector<int>> threeSum(vector<int> &nums) {
    vector<vector<int>> output;
    if (nums.size() < 3) {
      return output;
    }

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++) {
      if (i == 0 || (i > 0 && nums[i] != nums[i - 1])) {
        int current = nums[i];
        getTwoSums(nums, i, current, output);
      }
    }

    return output;
  }
};

// -4,-1,-1,0,1,2
