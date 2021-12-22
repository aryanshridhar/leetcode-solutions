class Solution {
public:
  // Really not recommended way.
  pair<int, string> get_bounds(int num) {
    if (num >= 1 && num <= 3) {
      return pair<int, string>(1, "I");
    } else if (num == 4) {
      return pair<int, string>(4, "IV");
    } else if (num >= 5 && num <= 8) {
      return pair<int, string>(5, "V");
    } else if (num == 9) {
      return pair<int, string>(9, "IX");
    } else if (num >= 10 && num <= 39) {
      return pair<int, string>(10, "X");
    } else if (num >= 40 && num <= 49) {
      return pair<int, string>(40, "XL");
    } else if (num >= 50 && num <= 89) {
      return pair<int, string>(50, "L");
    } else if (num >= 90 && num <= 99) {
      return pair<int, string>(90, "XC");
    } else if (num >= 100 && num <= 399) {
      return pair<int, string>(100, "C");
    } else if (num >= 400 && num <= 499) {
      return pair<int, string>(400, "CD");
    } else if (num >= 500 && num <= 899) {
      return pair<int, string>(500, "D");
    } else if (num >= 900 && num <= 999) {
      return pair<int, string>(900, "CM");
    } else {
      return pair<int, string>(1000, "M");
    }
  }

  string intToRoman(int num) {
    string s = "";
    while (num > 0) {
      pair<int, string> p1 = get_bounds(num);
      s.append(p1.second);
      num -= p1.first;
    }

    return s;
  }
};
