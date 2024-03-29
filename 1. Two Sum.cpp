//https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     map<int, int> all_elems;
            for (size_t i = 0; i < nums.size(); i++) {
            int cur = target - nums[i];
            if (all_elems.find(cur) != all_elems.end() && i != all_elems[cur])
                return {i, all_elems[cur]};
            else
               all_elems[nums[i]] = i; 
        }
        return {0, 0};
        
    }
};
