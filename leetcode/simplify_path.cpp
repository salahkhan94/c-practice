#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    string simplifyPath(string path) {
        stringstream ss(path);
        string token;
        vector<string> stack;  // use vector as a stack for easy traversal

        while (getline(ss, token, '/')) {
            if (token.empty() || token == ".") {
                continue;  // ignore
            } else if (token == "..") {
                if (!stack.empty()) {
                    stack.pop_back();  // go one directory up
                }
            } else {
                stack.push_back(token);  // valid directory
            }
        }

        // Build the simplified path
        string simplified_path = "/";
        for (size_t i = 0; i < stack.size(); ++i) {
            simplified_path += stack[i];
            if (i != stack.size() - 1) {
                simplified_path += "/";
            }
        }

        return simplified_path;
    }
};


class Solution {
public:
    string simplifyPath(string path) {
        stringstream ss(path);
        string token;
        stack<string> unix_path_stack;

        while(getline(ss, token, '/')) {
            if(!token.empty()) {
                unix_path_stack.push(token);
            }
        }

        string simplified_path = "";
        while(!unix_path_stack.empty()) {
            string temp = unix_path_stack.top();
            if (temp == ".") {
                unix_path_stack.pop();
            }
            else if (temp == "..") {
                unix_path_stack.pop();
                unix_path_stack.pop();
            }
            else {
                simplified_path = "/" + temp + simplified_path; 
            }
        }
        return simplified_path;
    }
};