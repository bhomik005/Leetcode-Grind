#include <unordered_map>
#include <vector>
class Solution {
public:
    // O(n) time  - where n is the size of nums
    // O(n) space - where n is the size of nums
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int,int> map;

        // start iterating over the elements
        // calculate the difference between target and the nums[i]
        // if the difference exists into the map - return the index and value of the key
        // else insert the element into the hashmap
        for(int i = 0; i < nums.size(); ++i) {
            int difference = target - nums[i];
            if(map.find(difference) != map.end()) return {i, map[difference]};
            else map[nums[i]] = i;
        }
        return {};
    }
};