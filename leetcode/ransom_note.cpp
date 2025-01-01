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