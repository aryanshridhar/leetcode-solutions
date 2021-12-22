class Solution {
public:
  // Really not recommended way.
  int get_bounds(string num) {
    if (num == "I") {
      return 1;
    } else if (num == "IV") {
      return 4;
    } else if (num == "V") {
      return 5;
    } else if (num == "IX") {
      return 9;
    } else if (num == "X") {
      return 10;
    } else if (num == "XL") {
      return 40;
    } else if (num == "L") {
      return 50;
    } else if (num == "XC") {
      return 90;
    } else if (num == "C") {
      return 100;
    } else if (num == "CD") {
      return 400;
    } else if (num == "D") {
      return 500;
    } else if (num == "CM") {
      return 900;
    } else {
      return 1000;
    }
  }

  int romanToInt(string s) {
    int ans = 0;
    int integer;
    string q;
    for (int i = 0; i < s.length(); i++) {
      integer = 1;
      q = "";

      q += s[i];
      if (!(i == s.length() - 1)) {
        q += s[i + 1];
      }

      if (q == "IV" || q == "IX" || q == "XL" || q == "XC" || q == "CD" ||
          q == "CM") {
        integer = get_bounds(q);
        ans += integer;
        i++;
      }

      else {
        string q(1, s[i]);
        integer = get_bounds(q);
        ans += integer;
      }
    }

    return ans;
  }
};