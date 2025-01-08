#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> bracket_map = {
            {')', '('}, 
            {']', '['}, 
            {'}', '{'}
            };
        vector<char> stack;

        for (auto & chr : s) {
            if (chr == '('|| chr == '[' || chr == '{') stack.push_back(chr);

            else {
                if (stack.empty() || stack.back() != bracket_map[chr]) {
                    return false;
                }
                stack.pop_back();
            }
        }
        return stack.empty();

    }
};

class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> bracket_map = {
            {')', '('}, 
            {']', '['}, 
            {'}', '{'} 
        };
        stack<char> stck;

        for (auto& ch : s) {
            if (ch=='('|| ch == '[' || ch == '{') {
                stck.push(ch);
            }
            else {
                if (stck.empty() || stck.top() != bracket_map[ch]) {
                    return false;
                }
                stck.pop();
            }
        }
        return stck.empty();
    }
};
