#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        unordered_map<char, int> s_map, t_map;

        for (int i = 0; i < s.size(); i++ ) {
            s_map[s[i]]++;
            t_map[t[i]]++;
        }

        for (char & ch : s) {
            if (t_map.find(ch) == t_map.end() or s_map[ch] != t_map[ch]) {
                return false;
            }
        }
        return true;
    }
};

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;

        int freq[26] = {0};

        for (int i = 0; i < s.size(); i++) {
            freq[s[i]-'a']++;
            freq[t[i]-'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) return 0;
        }
        return true;
    }
};