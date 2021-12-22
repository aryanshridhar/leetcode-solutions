class Solution {
public:
  vector<int> twoSum(vector<int> &numbers, int target) {
    int i = 0;
    int j = numbers.size() - 1;
    vector<int> output;

    while (i <= j) {
      int new_sum = numbers[i] + numbers[j];
      if (new_sum > target) {
        j--;
        continue;
      }

      if (new_sum < target) {
        i++;
        continue;
      }

      if (new_sum == target) {
        output.push_back(i + 1);
        output.push_back(j + 1);
        return output;
      }
    }

    return output;
  }
};