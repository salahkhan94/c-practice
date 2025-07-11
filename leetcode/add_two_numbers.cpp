#include<bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int k = 1;
        int num_l1 = 0;
        for (ListNode* i = l1; i != NULL; i = i->next) {
            num_l1 += (i->val * k);
            k = k*10;
        }
        k = 1;
        int num_l2 = 0;
        for (ListNode* i = l2; i != NULL; i = i->next) {
            num_l2 += (i->val * k);
            k = k*10;
        }

        int sum = num_l1 + num_l2;
        ListNode *head = NULL;
        ListNode *cur = NULL;
        while(sum != 0) {
            int digit = sum % 10;
            ListNode* newnode = new ListNode(digit);
            if (head == NULL) {
                head = newnode;
                cur = newnode;
            }
            else {
                cur->next = newnode;
                cur = newnode;
            }
            sum /= 10;
        }
        return head;
    }
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        int carry = 0;
        ListNode* current = dummy;

        while(l1 || l2 || carry) {
            int sum = carry;

            if (l1) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                sum += l2->val;
                l2 = l2->next;
            }
            int digit = sum % 10;

            carry = sum/10;
            current->next = new ListNode(digit);
            current = current->next;
        }

        return dummy->next;

    }
};