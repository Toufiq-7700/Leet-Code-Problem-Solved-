class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2){
        int i=0,j=0;
        set<int> ans;
        for(auto x : nums1){
            for(auto y : nums2){
                if(x == y){
                    ans.insert(x);
                }
            }
        }
        vector<int> res(ans.begin(), ans.end());
        return res;
    }
};
