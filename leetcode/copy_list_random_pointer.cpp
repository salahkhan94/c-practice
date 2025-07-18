#include<bits/stdc++.h>

using namespace std;


class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head)
            return NULL;
        Node * current = head;
        while(current) {
            Node* newnode = new Node(current->val);
            newnode->next = current->next;
            current->next = newnode;
            current = newnode->next;
        }
        current = head;
        while(current) {
            Node * cur_copy = current->next;
            Node *rand = current->random;
            if(rand) {
                cur_copy->random = rand->next;
            }
            else {
                cur_copy->random = rand;
            }

            current = cur_copy->next;
        }
        current = head;
        Node* head_copy = head->next;
        while(current) {
            Node * copy = current->next;
            current->next = copy->next;
            if (current->next) {
            copy->next = current->next->next;
            }
            current = current->next;
        }
        return head_copy;
    }
};


class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (!head)
            return NULL;
        Node * current = head;
        while(current) {
            Node* newnode = new Node(current->val);
            newnode->next = current->next;
            current->next = newnode;
            current = newnode->next;
        }
        current = head;
        while(current) {
            Node * cur_copy = current->next;
            Node *rand = current->random;
            if(rand) {
                cur_copy->random = rand->next;
            }
            else {
                cur_copy->random = rand;
            }

            current = cur_copy->next;
        }
        current = head;
        Node* head_copy = head->next;
        while(current) {
            Node * copy = current->next;
            current->next = copy->next;
            if (current->next) {
            copy->next = current->next->next;
            }
            current = current->next;
        }
        return head_copy;
    }
};