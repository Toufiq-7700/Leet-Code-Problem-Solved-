class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        sort(nums.rbegin(), nums.rend());
        int n = nums.size();
        int cnt = 0;        
        set<int, greater<int>> ans;
        for(int i=0; i<n; i++){
            ans.insert(nums[i]);
            if(ans.size() == k) break;
        }
        vector<int> a(ans.begin(), ans.end());
        return a;
    }
};
