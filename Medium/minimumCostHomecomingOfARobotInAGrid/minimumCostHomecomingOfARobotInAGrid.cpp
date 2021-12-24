class Solution {
public:
  int minCost(vector<int> &startPos, vector<int> &homePos,
              vector<int> &rowCosts, vector<int> &colCosts) {
    int cost = 0;
    int start_row = startPos[0];
    int start_col = startPos[1];
    int end_row = homePos[0];
    int end_col = homePos[1];

    if (end_row > start_row) {
      for (int i = start_row + 1; i <= end_row; i++) {
        cost += rowCosts[i];
      }
    } else if (end_row < start_row) {
      for (int i = start_row - 1; i >= end_row; i--) {
        cost += rowCosts[i];
      }
    }

    if (end_col > start_col) {
      for (int i = start_col + 1; i <= end_col; i++) {
        cost += colCosts[i];
      }
    } else if (end_col < start_col) {
      for (int i = start_col - 1; i >= end_col; i--) {
        cost += colCosts[i];
      }
    }

    return cost;
  }
};