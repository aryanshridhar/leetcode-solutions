class Solution {
public:
  int wateringPlants(vector<int> &plants, int capacity) {
    long long int cap = 0;
    int n = capacity;
    int i = 0;

    while (i < plants.size()) {
      if (capacity >= plants[i]) {
        capacity -= plants[i];
        cap++;
        i++;

        continue;
      }

      capacity = n;
      cap += 2 * i;
    }

    return cap;
  }
};