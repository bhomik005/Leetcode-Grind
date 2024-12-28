class Solution {

public:
    bool containsDuplicate(vector<int> &nums) {
        // while iterating through the elements
        // check if the curr element already exists in the set
        // if it does - return true
        // if not - save the element in the set
        // O(n) time | O(n) space (Optimal solution)
        unordered_set<int> set;
        for (int i = 0; i < nums.size(); ++i) {
            if (set.find(nums[i]) == set.end()) set.insert(nums[i]);
            else return true;
        }
        return false;

        // // iterate through the elements multiple times
        // // and check if any element occurs twice
        // // O(n^2) time | O(1) time (Brute force solution)
        // for(int i = 0; i < nums.size(); ++i) {
        //     // O(n) times
        //     for(int j = 0; j < nums.size(); ++j) {
        //         if(i == j) continue;

        //         // found a duplicate element
        //         if(nums[i] == nums[j]) return true;
        //     }
        // }
        // // if all the elements are distinct
        // return false;
    }
};