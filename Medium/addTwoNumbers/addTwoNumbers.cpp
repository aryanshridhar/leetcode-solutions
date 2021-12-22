/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    int carry = 0;
    string str;
    ListNode *h1 = l1;
    ListNode *h2 = l2;

    while (h1 != NULL && h2 != NULL) {
      int s = h1->val + h2->val + carry;
      if (s >= 10) {
        carry = 1;
        s = s % 10;
      } else {
        carry = 0;
      }

      str.append(to_string(s));

      h1 = h1->next;
      h2 = h2->next;
    }

    while (h1 != NULL) {
      int s = h1->val + carry;
      if (s >= 10) {
        carry = 1;
        s = s % 10;
      } else {
        carry = 0;
      }

      str.append(to_string(s));
      h1 = h1->next;
    }

    while (h2 != NULL) {
      int s = h2->val + carry;
      if (s >= 10) {
        carry = 1;
        s = s % 10;
      } else {
        carry = 0;
      }

      str.append(to_string(s));
      h2 = h2->next;
    }

    if (carry == 1) {
      str.append(to_string(carry));
      carry = 0;
    }

    ListNode *ans = NULL;
    ListNode *tra = NULL;

    for (auto i : str) {
      if (ans == NULL) {
        ans = new ListNode(i - '0');
        tra = ans;
      } else {
        tra->next = new ListNode(i - '0');
        tra = tra->next;
      }
    }

    return ans;
  }
};
