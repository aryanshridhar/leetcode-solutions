class RangeFreqQuery {
private:
  unordered_map<int, vector<int>> container;

public:
  RangeFreqQuery(vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++) {
      if (container.find(arr[i]) == container.end())
        container[arr[i]] = {i};
      else
        container[arr[i]].push_back(i);
    }
  }

  int query(int left, int right, int value) {
    vector<int> freq = container[value];
    if (freq.empty()) {
      return 0;
    }

    auto lpos = lower_bound(freq.begin(), freq.end(), left);
    auto rpos = upper_bound(freq.begin(), freq.end(), right);

    return rpos - lpos;
  }
};

/**
 * Your RangeFreqQuery object will be instantiated and called as such:
 * RangeFreqQuery* obj = new RangeFreqQuery(arr);
 * int param_1 = obj->query(left,right,value);
 */