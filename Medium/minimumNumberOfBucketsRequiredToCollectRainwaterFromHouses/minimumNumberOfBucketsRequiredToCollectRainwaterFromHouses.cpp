class Solution {
public:
  int minimumBuckets(string street) {
    vector<int> buckets;
    unordered_map<int, bool> buck;

    for (int i = 0; i < street.size(); i++) {
      if (street[i] == 'H') {

        if (buck[i + 1] == true || buck[i - 1] == true) {
          continue;
        }

        if (i + 1 < street.size() && street[i + 1] == '.') {
          buck[i + 1] = true;
          buckets.push_back(i + 1);
        } else if (i - 1 >= 0 && street[i - 1] == '.') {
          buck[i - 1] = true;
          buckets.push_back(i - 1);
        } else {
          return -1;
        }
      }
    }

    return buckets.size();
  }
};

// .H.H.