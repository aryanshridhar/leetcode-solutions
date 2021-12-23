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
  ListNode *removeNthFromEnd(ListNode *head, int n) {
    int len = 0;
    ListNode *ptr = head;

    while (ptr != NULL) {
      len++;
      ptr = ptr->next;
    }
    ptr = head;
    int index = len - n + 1;

    int j = 1;

    if (index == 1) {

      head = head->next;
      return head;
    }

    while (j < index - 1) {
      ptr = ptr->next;
      j++;
    }

    ListNode *to_remove = ptr->next;
    ptr->next = to_remove->next;

    return head;
  }
};