class Solution {
public:
  int lengthOfLongestSubstring(string s) {
    int i = 0;
    int j = 0;
    int res = 0;
    unordered_map<int, int> cont;
    if (s.empty()) {
      return 0;
    }

    while (j < s.length()) {
      cont[s[j]]++;
      if (cont.size() < j - i + 1) {
        while (cont.size() < j - i + 1) {
          cont[s[i]]--;
          if (cont[s[i]] == 0) {
            cont.erase(s[i]);
          }
          i++;
        }
      }
      res = max(j - i + 1, res);
      j++;
    }

    return res;
  }
};