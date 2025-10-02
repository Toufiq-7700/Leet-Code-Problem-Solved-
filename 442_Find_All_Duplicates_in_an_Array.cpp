class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp(n+1,-1);
        vector<int> ans;
        for(int i=0; i<n; i++){
            int x = nums[i];
            if(temp[x] == -1){
                temp[x] = x;
            }
            else{
                ans.push_back(x);
            }
        }
        return ans;
    }
};
