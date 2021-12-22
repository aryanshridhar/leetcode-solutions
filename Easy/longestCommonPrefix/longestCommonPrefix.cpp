class Solution {
public:
  int getPrefixSize(string str1, string str2) {
    int str1pointer = 0;
    int str2pointer = 0;
    int len = 0;

    while (str1pointer < str1.length() && str2pointer < str2.length() &&
           str1[str1pointer] == str2[str2pointer]) {
      len++;
      str1pointer++;
      str2pointer++;
    }

    return len;
  }

  string longestCommonPrefix(vector<string> &strs) {
    int maxi = INT_MAX;
    for (int i = 0; i < strs.size() - 1; i++) {
      if (strs[i] == "" || strs[i + 1] == "") {
        return "";
      }
      maxi = min(maxi, getPrefixSize(strs[i], strs[i + 1]));
    }

    if (maxi == 0) {
      return "";
    }

    return strs[1].substr(0, maxi);
  }
};