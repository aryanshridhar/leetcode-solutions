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
  ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
    ListNode *res = NULL;
    ListNode *head = res;
    ListNode *l1_ptr = l1;
    ListNode *l2_ptr = l2;

    if (l1 == NULL) {
      return l2;
    } else if (l2 == NULL) {
      return l1;
    }

    if (l1 == NULL && l2 == NULL) {
      ListNode *ret = NULL;
      return ret;
    }

    while (l1_ptr != NULL && l2_ptr != NULL) {
      if (l1_ptr->val >= l2_ptr->val) {
        ListNode *new_node = new ListNode(l2_ptr->val);
        if (res == NULL) {
          res = new_node;
          head = res;
        } else {
          res->next = new_node;
          res = res->next;
        }

        l2_ptr = l2_ptr->next;
      } else {
        ListNode *new_node = new ListNode(l1_ptr->val);
        if (res == NULL) {
          res = new_node;
          head = res;
        } else {
          res->next = new_node;
          res = res->next;
        }

        l1_ptr = l1_ptr->next;
      }
    }

    if (l2_ptr == NULL) {
      while (l1_ptr != NULL) {
        ListNode *new_node = new ListNode(l1_ptr->val);
        res->next = new_node;
        res = res->next;

        l1_ptr = l1_ptr->next;
      }
    } else {
      while (l2_ptr != NULL) {
        ListNode *new_node = new ListNode(l2_ptr->val);
        res->next = new_node;
        res = res->next;

        l2_ptr = l2_ptr->next;
      }
    }

    return head;
  }
};