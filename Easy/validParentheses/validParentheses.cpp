class Solution {
public:
  bool isValid(string s) {
    map<char, char> m;
    m.insert(pair<char, char>('(', ')'));
    m.insert(pair<char, char>('{', '}'));
    m.insert(pair<char, char>('[', ']'));

    stack<char> container;
    for (int i = 0; i < s.length(); i++) {
      if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
        container.push(s[i]);
      } else {
        char expected_char = s[i];
        if (!container.empty()) {
          if (expected_char == m[container.top()]) {
            container.pop();
          } else {
            return false;
          }
        } else {
          return false;
        }
      }
    }

    if (container.empty()) {
      return true;
    }

    return false;
  }
};