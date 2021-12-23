class Solution {
public:
  void generate(vector<string> &output, vector<string> all_strings,
                string &current_string, int index, int max_len) {
    if (current_string.length() == max_len) {
      output.push_back(current_string);
      return;
    }

    for (int i = 0; i < all_strings[index].size(); i++) {
      current_string.push_back(all_strings[index][i]);
      generate(output, all_strings, current_string, index + 1, max_len);
      current_string.pop_back();
    }
  }

  vector<string> letterCombinations(string digits) {
    vector<string> output;
    if (digits == "") {
      return output;
    }
    map<char, string> hashmap;

    hashmap['2'] = "abc";
    hashmap['3'] = "def";
    hashmap['4'] = "ghi";
    hashmap['5'] = "jkl";
    hashmap['6'] = "mno";
    hashmap['7'] = "pqrs";
    hashmap['8'] = "tuv";
    hashmap['9'] = "wxyz";

    vector<string> input;
    for (int i = 0; i < digits.size(); i++) {
      input.push_back(hashmap[digits[i]]);
    }
    string current_string = "";

    generate(output, input, current_string, 0, digits.length());
    for (int i = 0; i < output.size(); i++) {
      cout << output[i] << endl;
    }

    return output;
  }
};
