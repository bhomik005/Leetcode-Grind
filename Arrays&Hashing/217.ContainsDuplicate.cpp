#include <unordered_set>
#include <vector>

class Solution {
public:
    // O(n) time  - where n is the size of nums
    // O(n) space - where n is the size of nums
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> set;
        // start iterating over the elements
        // and check if the element already exists in the set
        // if yes - return true
        // if no - store the element in the set and move on to the next element
        for(unsigned int i = 0; i < nums.size(); ++i) {
            if(set.find(nums[i]) != set.end()) return true;
            else set.insert(nums[i]);
        }
        return false;
    }
};
