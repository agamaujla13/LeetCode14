class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        set <int> agam;
        for (int i =0; i<nums.size(); i++)
        {
            if (i>k)
            agam.erase(nums[i-k-1]);
            if(agam.count(nums[i]))
            return true;

            agam.insert(nums[i]);
        }
        return false;
    }
};