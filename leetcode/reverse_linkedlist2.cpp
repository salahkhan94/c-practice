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
        ListNode* prev = nullptr;
        ListNode* leftpoint = nullptr;
        ListNode* rightpoint = nullptr;
        ListNode* leftpoint_ = nullptr;
        ListNode* rightpoint_ = nullptr;

        for (int i = 1; i < right +1; i++) {
            if (i == left-1) {
                leftpoint_ = current;
            } 
            else if(i >= left && i <= right) {
                ListNode * point = new ListNode(current->val);
                if (i == left) {
                    leftpoint = point;
                }
                else{
                    point->next = prev;
                }
                if (i == right) {
                    rightpoint = point;
                    rightpoint_ = current->next;
                }
                prev = point;
            }
            current = current->next;
        }
        if (leftpoint_) {
            leftpoint_->next = rightpoint;
        } else {
            head = rightpoint;  // if left == 1
        }

        if (leftpoint)
            leftpoint->next = rightpoint_;

        return head;
    }
};

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* current = head;
        ListNode* prev = nullptr;
        ListNode* leftpoint = nullptr;
        ListNode* rightpoint = nullptr;
        ListNode* leftpoint_ = nullptr;
        ListNode* rightpoint_ = nullptr;

        for (int i = 1; i <= right; i++) {
            if (i == left - 1) {
                leftpoint_ = current;
            }

            if (i >= left && i <= right) {
                ListNode* point = new ListNode(current->val);
                if (i == left) {
                    leftpoint = point;
                    prev = point;
                } else {
                    point->next = prev;
                    prev = point;
                }

                if (i == right) {
                    rightpoint = prev;
                    rightpoint_ = current->next;
                }
            }

            current = current->next;
        }

        if (leftpoint_) {
            leftpoint_->next = rightpoint;
        } else {
            head = rightpoint;  // if left == 1
        }

        if (leftpoint)
            leftpoint->next = rightpoint_;

        return head;
    }
};

class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head;

        ListNode dummy(0);
        dummy.next = head;
        ListNode* prev = &dummy;

        for (int i = 1; i < left; ++i) {
            prev = prev->next;
        }

        ListNode* curr = prev->next;
        for (int i = 0; i < right - left; ++i) {
            ListNode* temp = curr->next;
            curr->next = temp->next;
            temp->next = prev->next;
            prev->next = temp;
        }

        return dummy.next;
    }
};

