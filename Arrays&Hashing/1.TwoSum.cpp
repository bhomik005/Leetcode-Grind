class Solution {

// nums = [2, 7, 11, 15] , target = 9
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> prevNums;

        // while iterating through the numbers, check if
        // the difference between the target and the current
        // num exists in the hashmap - if it does then
        // return the value(idx) of the number in the
        // map else store the number in the map with idx as val
        // O(n) time | O(n) space
        for(int i = 0; i < nums.size(); ++i) {
            int potentialMatch = target - nums[i];
            if(prevNums.find(potentialMatch) == prevNums.end()) prevNums[nums[i]] = i;
            else return {i, prevNums[potentialMatch]};
        }
        return {};
    }
};