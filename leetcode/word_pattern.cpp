#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);

        vector<string> words;
        string word;

        while (getline(ss, word, ' ')) {
            words.push_back(word);
        }
        if (words.size() != pattern.size()) return false;

        unordered_map<string, char> s_map;
        unordered_map<char, string> p_map;

        for (int i = 0; i < pattern.size(); i++) {
            if (s_map.find(words[i]) != s_map.end()) {
                if (s_map[words[i]] != pattern[i])
                    return false;
            }
            if (p_map.find(pattern[i]) != p_map.end()) {
                if (p_map[pattern[i]] != words[i]) 
                    return false;
            }
            s_map[words[i]] = pattern[i];
            p_map[pattern[i]] = words[i];
        }
        return true;
    }
};