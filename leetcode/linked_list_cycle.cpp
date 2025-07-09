#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> next_map;
        for (ListNode* i = head; i != NULL; i = i->next) {
            if (next_map.find(i) != next_map.end()) {
                return true;
            }
            else {
                next_map.insert(i);
            }
        }
        return false;
    }
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode *fast = head;
        
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                return true; // cycle detected
            }
        }
        return false; // no cycle
    }
};
