class Solution {
public:
  unordered_map<char, int> get_freq(string s) {
    unordered_map<char, int> container;
    for (auto i : s) {
      container[i]++;
    }

    return container;
  }

  bool checkAlmostEquivalent(string word1, string word2) {
    unordered_map<char, int> cont1 = get_freq(word1);
    unordered_map<char, int> cont2 = get_freq(word2);

    for (auto i : cont1) {
      if (!(abs(cont2[i.first] - i.second) <= 3)) {
        return false;
      }
    }
    for (auto i : cont2) {
      if (!(abs(cont1[i.first] - i.second) <= 3)) {
        return false;
      }
    }

    return true;
  }
};