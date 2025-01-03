#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> s_map;
        unordered_map<char,char> t_map;
        for (int i = 0; i < s.size(); i++) {
            if (s_map.find(s[i])!= s_map.end() || t_map.find(t[i]) != t_map.end()) {
                if (t[i] != s_map[s[i]] || s[i] != t_map[t[i]]) return false;
            }
            else {
                s_map[s[i]] = t[i];
                t_map[t[i]] = s[i];
            }
        }
        return true;
    }
};

class Solution {
public:
    bool isIsomorphic(const string &s, const string &t) {
        if (s.size() != t.size()) return false;

        // Arrays initialized to 0 mean "no mapping yet"
        char s_map[256] = {0};
        char t_map[256] = {0};

        for (int i = 0; i < s.size(); ++i) {
            unsigned char c1 = static_cast<unsigned char>(s[i]);
            unsigned char c2 = static_cast<unsigned char>(t[i]);

            // If neither c1 nor c2 has been mapped yet, establish the mapping
            if (s_map[c1] == 0 && t_map[c2] == 0) {
                s_map[c1] = c2;
                t_map[c2] = c1;
            }
            // Otherwise, they must match the existing mapping
            else if (s_map[c1] != c2 || t_map[c2] != c1) {
                return false;
            }
        }

        return true;
    }
};
