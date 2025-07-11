#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = new ListNode(0);
        ListNode* current = head;
        while(list1 && list2) {
            int l1, l2;
            l1 = list1->val;
            l2 = list2->val;
            if (l1 < l2) {
                current->next = new ListNode(l1);
                list1 = list1->next;
            }
            else {
                current->next = new ListNode(l2);
                list2 = list2->next;
            }
            current = current->next;
        }
        current->next = list1 ? list1 : list2;        
        return head->next;
    }
};