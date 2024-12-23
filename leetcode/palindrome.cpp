#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(std::remove_if(s.begin(), s.end(), 
                   [](unsigned char c){ return !std::isalnum(c); }),
                s.end());
        
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        int n = s.size();
        for (int i = 0; i < n / 2; i++) {
            if (s[i] != s[n - 1 - i]) {
                return false;
            }
        }
        return true;
    }
};


bool isAlphanumeric(char c) {
    // Check 0-9
    if (c >= '0' && c <= '9') return true;
    // Check A-Z
    if (c >= 'A' && c <= 'Z') return true;
    // Check a-z
    if (c >= 'a' && c <= 'z') return true;
    return false;
}

// Helper function to convert uppercase letters to lowercase manually.
char toLowerCase(char c) {
    // ASCII 'A'..'Z' range: 65..90
    // ASCII 'a'..'z' range: 97..122
    if (c >= 'A' && c <= 'Z') {
        return c + 32; // 'A'(65) + 32 = 'a'(97)
    }
    return c;
}

bool isPalindrome(const string &s) {
    // 1. Filter out non-alphanumeric characters and convert to lowercase
    //    We'll store the result in a new string (filtered).
    string filtered;
    filtered.reserve(s.size()); // Optional, helps avoid repeated reallocation
    for (int i = 0; i < (int)s.size(); i++) {
        char c = s[i];
        if (isAlphanumeric(c)) {
            filtered.push_back(toLowerCase(c));
        }
    }

    // 2. Check if 'filtered' is a palindrome by comparing characters
    //    from the start and end moving inward.
    int left = 0;
    int right = (int)filtered.size() - 1;
    while (left < right) {
        if (filtered[left] != filtered[right]) {
            return false;
        }
        left++;
        right--;
    }

    // If we made it here, every pair matched => it's a palindrome
    return true;
}
