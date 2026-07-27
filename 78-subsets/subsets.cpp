class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> array;
        allSubsets(0, nums, array,ans);
        return ans;
    }
        void allSubsets (int i, vector<int>& nums, vector<int>& array,
        vector<vector<int>>& ans)
        {
            if (i == nums.size()) {
            ans.push_back(array);
            return;
        }
        
        allSubsets(i+1,nums, array, ans);
        array.push_back(nums[i]);
        allSubsets(i+1, nums, array, ans);

        array.pop_back();
            }
};