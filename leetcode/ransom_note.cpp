#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mag;
        for (auto c : magazine) {
            mag[c]++;
        }
        for (auto c : ransomNote) {
            if (mag[c] == 0) return false;
            mag[c]--;
        }
        return true;
    }
};

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mag;
        
        for (const auto c : magazine) {
            mag[c]++;
        }
        for (const auto c : ransomNote) {
            if (mag[c] == 0) return false;
            mag[c]--;
        }
        return true;
    }
};