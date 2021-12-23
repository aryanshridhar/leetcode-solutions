class Solution {
public:
  void backtrack(vector<string> &output, string current, int open, int close) {
    if (open == 0 && close == 0) {
      output.push_back(current);
      return;
    }

    if (open > 0) {
      current.push_back('(');
      backtrack(output, current, open - 1, close);
      current.pop_back();
    }

    if (close > open) {
      current.push_back(')');
      backtrack(output, current, open, close - 1);
      current.pop_back();
    }
  }

  vector<string> generateParenthesis(int n) {
    int open = n;
    int close = n;
    vector<string> output;

    backtrack(output, "", open, close);

    return output;
  }
};