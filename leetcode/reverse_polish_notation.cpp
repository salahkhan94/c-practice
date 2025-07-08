#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> token_stack;
        for (string& token : tokens) {
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                int right = token_stack.top(); token_stack.pop();
                int left = token_stack.top(); token_stack.pop();
                if (token == "+") token_stack.push(left + right);
                else if (token == "-") token_stack.push(left - right);
                else if (token == "*") token_stack.push(left * right);
                else if (token == "/") token_stack.push(left / right);
            } else {
                token_stack.push(stoi(token));
            }
        }
        return token_stack.top();
    }
};
