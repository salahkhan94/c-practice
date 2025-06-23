#include <string>

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s_ptr = 0;
        int t_ptr = 0;

        while(s_ptr < s.size() && t_ptr < t.size()) {
            if(s[s_ptr] == t[t_ptr]) s_ptr++;
            t_ptr++;
        }
        return s_ptr == s.size();
    }
};

class Solution {
public:
    bool isSubsequence(string s, string t) {
        u_int s_ptr = 0;
        u_int t_ptr = 0;

        while(s_ptr < s.size() && t_ptr < t.size()) {
            if (s[s_ptr] == t[t_ptr]) s_ptr++;
            t_ptr++;
        }
        return s_ptr==s.size();
    }
};