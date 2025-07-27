#include <bits/stdc++.h>


struct ListNode {
    int val;
    ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* current = head;
        ListNode* leftpoint;
        ListNode* rightpoint;
        ListNode* leftpoint_;
        ListNode* rightpoint_;
        for (int i = 1; i < right +1; i++) {
            if (i == left-1) {
                leftpoint_ = current;
            } 
            else if(i >= left && i < right) {
                ListNode * point = new ListNode(current->val);
                if (i == left) {
                    leftpoint = point;
                }
                ListNode * var = current->next;


            }
            else if (i == right) {

            }
        }
    }
};