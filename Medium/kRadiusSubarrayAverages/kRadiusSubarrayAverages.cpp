class Solution {
public:
  vector<int> getAverages(vector<int> &nums, int k) {
    vector<long long int> prefix_vector;
    long long int sum = 0;
    for (auto i : nums) {
      sum += i;
      prefix_vector.push_back(sum);
    }

    vector<int> res;
    for (long int i = 0; i < nums.size(); i++) {
      if (i - k < 0 || i + k > nums.size() - 1) {
        res.push_back(-1);
        continue;
      }

      long long int whole_sum = prefix_vector[i + k];
      if (i - k - 1 < 0) {
        res.push_back((whole_sum / (2 * k + 1)));
        continue;
      }

      long long int left_sum = prefix_vector[i - k - 1];
      res.push_back((whole_sum - left_sum) / (2 * k + 1));
    }

    return res;
  }
};