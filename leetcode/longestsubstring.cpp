#include <string>
#include <iostream>
#include <unordered_set>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::ios::sync_with_stdio(false);
        cin.tie(nullptr);
        if(s.empty()) return 0;
        unordered_set<char> sp;
        int count =0,l=0,j=0;
        for(auto c:s){
            auto itr = sp.insert(c);
            if(itr.second) count++;
            else{
                while(!itr.second){
                    l = std::max(count,l);
                    sp.erase(s[j]);
                    j++;
                    itr = sp.insert(c);
                    count--;
                }
                count++;
            }


        }
        l = std::max(count,l);
        return l;
    }
};


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int> s_set;
        int left = 0;
        int max_length = 0;

        for (int right = 0; right < s.size(); right ++) {

            while (s_set.find(s[right]) != s_set.end()) {
                s_set.erase(s[left]);
                left++;
            }
            s_set.insert(s[right]);
            max_length = max(max_length, right - left + 1);
        }
        return max_length;

    }
};