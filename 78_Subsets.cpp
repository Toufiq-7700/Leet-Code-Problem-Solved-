class Solution {
public:
void helper(vector<int>& nums, vector<int> temp, vector<vector<int>> &ans, int i){
        if(i >= nums.size()){
            ans.push_back(temp);
            return;
        }
        //exclude
        helper(nums, temp, ans, i+1);
        //include
        temp.push_back(nums[i]);
        helper(nums, temp, ans, i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
        vector<vector<int>> ans;
        helper(nums, temp, ans, 0);
        return ans;
    }
};
