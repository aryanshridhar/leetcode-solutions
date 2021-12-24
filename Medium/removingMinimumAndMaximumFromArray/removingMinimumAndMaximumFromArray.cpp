class Solution {
public:
  int minimumDeletions(vector<int> &nums) {
    int mini = min_element(nums.begin(), nums.end()) - nums.begin();
    int maxi = max_element(nums.begin(), nums.end()) - nums.begin();

    int removing_from_left = max(mini, maxi) + 1;
    int removing_from_right = nums.size() - min(mini, maxi);
    int removing_from_both =
        min(mini, maxi) + 1 + (nums.size() - max(mini, maxi));

    return min(removing_from_left,
               min(removing_from_right, removing_from_both));
  }
};