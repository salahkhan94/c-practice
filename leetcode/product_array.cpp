#include <vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix_prod;
        int prod = 1;

        for (int i = 0; i < nums.size(); i++) {
            prefix_prod.push_back(prod);
            prod *= nums[i];
        }

        prod = 1;
        vector<int> suffix_prod;
        suffix_prod.resize(nums.size());
        
        for (int i = nums.size()-1; i > -1; i--) {
            suffix_prod[i] = prod;
            prod *= nums[i];
        }

        vector<int> prod_ex;
        prod_ex.resize(nums.size());

        for (int i = 0; i < nums.size(); i++) {
            prod_ex[i] = prefix_prod[i] * suffix_prod[i];
        }
        
        return prod_ex;
    }
};

vector<int> productExceptSelf2(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n, 1);

    // First pass: build prefix products directly in "result"
    int prefix = 1;
    for (int i = 0; i < n; i++) {
        result[i] = prefix;
        prefix *= nums[i];
    }

    // Second pass: multiply suffix products on the fly
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        result[i] *= suffix;    // multiply the stored prefix with suffix
        suffix *= nums[i];
    }

    return result;
}
